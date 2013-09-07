<?php
/**
 * @file
 * seedlibrary_general.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function seedlibrary_general_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'usda_plant_data';
  $feeds_importer->config = array(
    'name' => 'USDA Plant data',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'USDA',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'seed',
        'expire' => '-1',
        'author' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Symbol',
            'target' => 'field_seed_symbol',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Common Name',
            'target' => 'title',
            'unique' => 0,
          ),
          2 => array(
            'source' => 'Species',
            'target' => 'field_seed_species',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Variety',
            'target' => 'field_seed_variety',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Family',
            'target' => 'field_seed_family',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Symbol',
            'target' => 'guid',
            'unique' => 1,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'plain_text',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '3600',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['usda_plant_data'] = $feeds_importer;

  return $export;
}
