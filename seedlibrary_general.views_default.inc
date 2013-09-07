<?php
/**
 * @file
 * seedlibrary_general.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function seedlibrary_general_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'library';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Library';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Seeds currently available:';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'title' => array(
      'more_options' => array(
        'bef_filter_description' => '',
      ),
    ),
    'field_seed_family_value' => array(
      'more_options' => array(
        'bef_filter_description' => '',
      ),
    ),
    'field_seed_genus_value' => array(
      'more_options' => array(
        'bef_filter_description' => '',
      ),
    ),
    'field_seed_species_value' => array(
      'more_options' => array(
        'bef_filter_description' => '',
      ),
    ),
    'field_seed_variety_value' => array(
      'more_options' => array(
        'bef_filter_description' => '',
      ),
    ),
    'field_seed_cultivar_value' => array(
      'more_options' => array(
        'bef_filter_description' => '',
      ),
    ),
    'field_seed_difficulty_rating_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'bef_filter_description' => '',
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_seed_family' => 'field_seed_family',
    'field_seed_genus' => 'field_seed_genus',
    'field_seed_species' => 'field_seed_species',
    'field_seed_variety' => 'field_seed_variety',
    'field_seed_cultivar' => 'field_seed_cultivar',
    'field_seed_difficulty_rating' => 'field_seed_difficulty_rating',
    'field_seed_quantity' => 'field_seed_quantity',
    'checkout_seeds' => 'checkout_seeds',
    'checkin_seeds' => 'checkin_seeds',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_seed_family' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_seed_genus' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_seed_species' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_seed_variety' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_seed_cultivar' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_seed_difficulty_rating' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_seed_quantity' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'checkout_seeds' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'checkin_seeds' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Filter';
  $handler->display->display_options['header']['area']['content'] = '<h3>Filter your results</h3>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Common Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Family */
  $handler->display->display_options['fields']['field_seed_family']['id'] = 'field_seed_family';
  $handler->display->display_options['fields']['field_seed_family']['table'] = 'field_data_field_seed_family';
  $handler->display->display_options['fields']['field_seed_family']['field'] = 'field_seed_family';
  /* Field: Content: Genus */
  $handler->display->display_options['fields']['field_seed_genus']['id'] = 'field_seed_genus';
  $handler->display->display_options['fields']['field_seed_genus']['table'] = 'field_data_field_seed_genus';
  $handler->display->display_options['fields']['field_seed_genus']['field'] = 'field_seed_genus';
  /* Field: Content: Species */
  $handler->display->display_options['fields']['field_seed_species']['id'] = 'field_seed_species';
  $handler->display->display_options['fields']['field_seed_species']['table'] = 'field_data_field_seed_species';
  $handler->display->display_options['fields']['field_seed_species']['field'] = 'field_seed_species';
  /* Field: Content: Variety */
  $handler->display->display_options['fields']['field_seed_variety']['id'] = 'field_seed_variety';
  $handler->display->display_options['fields']['field_seed_variety']['table'] = 'field_data_field_seed_variety';
  $handler->display->display_options['fields']['field_seed_variety']['field'] = 'field_seed_variety';
  /* Field: Content: Cultivar */
  $handler->display->display_options['fields']['field_seed_cultivar']['id'] = 'field_seed_cultivar';
  $handler->display->display_options['fields']['field_seed_cultivar']['table'] = 'field_data_field_seed_cultivar';
  $handler->display->display_options['fields']['field_seed_cultivar']['field'] = 'field_seed_cultivar';
  /* Field: Content: Difficulty rating */
  $handler->display->display_options['fields']['field_seed_difficulty_rating']['id'] = 'field_seed_difficulty_rating';
  $handler->display->display_options['fields']['field_seed_difficulty_rating']['table'] = 'field_data_field_seed_difficulty_rating';
  $handler->display->display_options['fields']['field_seed_difficulty_rating']['field'] = 'field_seed_difficulty_rating';
  /* Field: Content: Quantity */
  $handler->display->display_options['fields']['field_seed_quantity']['id'] = 'field_seed_quantity';
  $handler->display->display_options['fields']['field_seed_quantity']['table'] = 'field_data_field_seed_quantity';
  $handler->display->display_options['fields']['field_seed_quantity']['field'] = 'field_seed_quantity';
  $handler->display->display_options['fields']['field_seed_quantity']['label'] = 'Amount available';
  $handler->display->display_options['fields']['field_seed_quantity']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Checkout link */
  $handler->display->display_options['fields']['checkout_seeds']['id'] = 'checkout_seeds';
  $handler->display->display_options['fields']['checkout_seeds']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['checkout_seeds']['field'] = 'checkout_seeds';
  $handler->display->display_options['fields']['checkout_seeds']['label'] = '';
  $handler->display->display_options['fields']['checkout_seeds']['element_label_colon'] = FALSE;
  /* Field: Content: Checkin link */
  $handler->display->display_options['fields']['checkin_seeds']['id'] = 'checkin_seeds';
  $handler->display->display_options['fields']['checkin_seeds']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['checkin_seeds']['field'] = 'checkin_seeds';
  $handler->display->display_options['fields']['checkin_seeds']['label'] = '';
  $handler->display->display_options['fields']['checkin_seeds']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'seed' => 'seed',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Quantity (field_seed_quantity) */
  $handler->display->display_options['filters']['field_seed_quantity_value']['id'] = 'field_seed_quantity_value';
  $handler->display->display_options['filters']['field_seed_quantity_value']['table'] = 'field_data_field_seed_quantity';
  $handler->display->display_options['filters']['field_seed_quantity_value']['field'] = 'field_seed_quantity_value';
  $handler->display->display_options['filters']['field_seed_quantity_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_seed_quantity_value']['value']['value'] = '0';
  $handler->display->display_options['filters']['field_seed_quantity_value']['group'] = 1;
  $handler->display->display_options['filters']['field_seed_quantity_value']['expose']['operator_id'] = 'field_seed_quantity_value_op';
  $handler->display->display_options['filters']['field_seed_quantity_value']['expose']['label'] = 'Amount available';
  $handler->display->display_options['filters']['field_seed_quantity_value']['expose']['operator'] = 'field_seed_quantity_value_op';
  $handler->display->display_options['filters']['field_seed_quantity_value']['expose']['identifier'] = 'field_seed_quantity_value';
  $handler->display->display_options['filters']['field_seed_quantity_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Common name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'common_name';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Family (field_seed_family) */
  $handler->display->display_options['filters']['field_seed_family_value']['id'] = 'field_seed_family_value';
  $handler->display->display_options['filters']['field_seed_family_value']['table'] = 'field_data_field_seed_family';
  $handler->display->display_options['filters']['field_seed_family_value']['field'] = 'field_seed_family_value';
  $handler->display->display_options['filters']['field_seed_family_value']['group'] = 1;
  $handler->display->display_options['filters']['field_seed_family_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_seed_family_value']['expose']['operator_id'] = 'field_seed_family_value_op';
  $handler->display->display_options['filters']['field_seed_family_value']['expose']['label'] = 'Family';
  $handler->display->display_options['filters']['field_seed_family_value']['expose']['operator'] = 'field_seed_family_value_op';
  $handler->display->display_options['filters']['field_seed_family_value']['expose']['identifier'] = 'family';
  $handler->display->display_options['filters']['field_seed_family_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Genus (field_seed_genus) */
  $handler->display->display_options['filters']['field_seed_genus_value']['id'] = 'field_seed_genus_value';
  $handler->display->display_options['filters']['field_seed_genus_value']['table'] = 'field_data_field_seed_genus';
  $handler->display->display_options['filters']['field_seed_genus_value']['field'] = 'field_seed_genus_value';
  $handler->display->display_options['filters']['field_seed_genus_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_seed_genus_value']['group'] = 1;
  $handler->display->display_options['filters']['field_seed_genus_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_seed_genus_value']['expose']['operator_id'] = 'field_seed_genus_value_op';
  $handler->display->display_options['filters']['field_seed_genus_value']['expose']['label'] = 'Genus';
  $handler->display->display_options['filters']['field_seed_genus_value']['expose']['operator'] = 'field_seed_genus_value_op';
  $handler->display->display_options['filters']['field_seed_genus_value']['expose']['identifier'] = 'genus';
  $handler->display->display_options['filters']['field_seed_genus_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Species (field_seed_species) */
  $handler->display->display_options['filters']['field_seed_species_value']['id'] = 'field_seed_species_value';
  $handler->display->display_options['filters']['field_seed_species_value']['table'] = 'field_data_field_seed_species';
  $handler->display->display_options['filters']['field_seed_species_value']['field'] = 'field_seed_species_value';
  $handler->display->display_options['filters']['field_seed_species_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_seed_species_value']['group'] = 1;
  $handler->display->display_options['filters']['field_seed_species_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_seed_species_value']['expose']['operator_id'] = 'field_seed_species_value_op';
  $handler->display->display_options['filters']['field_seed_species_value']['expose']['label'] = 'Species';
  $handler->display->display_options['filters']['field_seed_species_value']['expose']['operator'] = 'field_seed_species_value_op';
  $handler->display->display_options['filters']['field_seed_species_value']['expose']['identifier'] = 'species';
  $handler->display->display_options['filters']['field_seed_species_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Variety (field_seed_variety) */
  $handler->display->display_options['filters']['field_seed_variety_value']['id'] = 'field_seed_variety_value';
  $handler->display->display_options['filters']['field_seed_variety_value']['table'] = 'field_data_field_seed_variety';
  $handler->display->display_options['filters']['field_seed_variety_value']['field'] = 'field_seed_variety_value';
  $handler->display->display_options['filters']['field_seed_variety_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_seed_variety_value']['group'] = 1;
  $handler->display->display_options['filters']['field_seed_variety_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_seed_variety_value']['expose']['operator_id'] = 'field_seed_variety_value_op';
  $handler->display->display_options['filters']['field_seed_variety_value']['expose']['label'] = 'Variety';
  $handler->display->display_options['filters']['field_seed_variety_value']['expose']['operator'] = 'field_seed_variety_value_op';
  $handler->display->display_options['filters']['field_seed_variety_value']['expose']['identifier'] = 'variety';
  $handler->display->display_options['filters']['field_seed_variety_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Cultivar (field_seed_cultivar) */
  $handler->display->display_options['filters']['field_seed_cultivar_value']['id'] = 'field_seed_cultivar_value';
  $handler->display->display_options['filters']['field_seed_cultivar_value']['table'] = 'field_data_field_seed_cultivar';
  $handler->display->display_options['filters']['field_seed_cultivar_value']['field'] = 'field_seed_cultivar_value';
  $handler->display->display_options['filters']['field_seed_cultivar_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_seed_cultivar_value']['group'] = 1;
  $handler->display->display_options['filters']['field_seed_cultivar_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_seed_cultivar_value']['expose']['operator_id'] = 'field_seed_cultivar_value_op';
  $handler->display->display_options['filters']['field_seed_cultivar_value']['expose']['label'] = 'Cultivar';
  $handler->display->display_options['filters']['field_seed_cultivar_value']['expose']['operator'] = 'field_seed_cultivar_value_op';
  $handler->display->display_options['filters']['field_seed_cultivar_value']['expose']['identifier'] = 'cultivar';
  $handler->display->display_options['filters']['field_seed_cultivar_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Difficulty rating (field_seed_difficulty_rating) */
  $handler->display->display_options['filters']['field_seed_difficulty_rating_value']['id'] = 'field_seed_difficulty_rating_value';
  $handler->display->display_options['filters']['field_seed_difficulty_rating_value']['table'] = 'field_data_field_seed_difficulty_rating';
  $handler->display->display_options['filters']['field_seed_difficulty_rating_value']['field'] = 'field_seed_difficulty_rating_value';
  $handler->display->display_options['filters']['field_seed_difficulty_rating_value']['group'] = 1;
  $handler->display->display_options['filters']['field_seed_difficulty_rating_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_seed_difficulty_rating_value']['expose']['operator_id'] = 'field_seed_difficulty_rating_value_op';
  $handler->display->display_options['filters']['field_seed_difficulty_rating_value']['expose']['label'] = 'Difficulty';
  $handler->display->display_options['filters']['field_seed_difficulty_rating_value']['expose']['operator'] = 'field_seed_difficulty_rating_value_op';
  $handler->display->display_options['filters']['field_seed_difficulty_rating_value']['expose']['identifier'] = 'difficulty';
  $handler->display->display_options['filters']['field_seed_difficulty_rating_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );

  /* Display: Available Seeds Page */
  $handler = $view->new_display('page', 'Available Seeds Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'library';
  $handler->display->display_options['menu']['title'] = 'Library';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Full Library Page */
  $handler = $view->new_display('page', 'Full Library Page', 'full_library_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'All seeds';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'seed' => 'seed',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Common name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'common_name';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Family (field_seed_family) */
  $handler->display->display_options['filters']['field_seed_family_value']['id'] = 'field_seed_family_value';
  $handler->display->display_options['filters']['field_seed_family_value']['table'] = 'field_data_field_seed_family';
  $handler->display->display_options['filters']['field_seed_family_value']['field'] = 'field_seed_family_value';
  $handler->display->display_options['filters']['field_seed_family_value']['group'] = 1;
  $handler->display->display_options['filters']['field_seed_family_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_seed_family_value']['expose']['operator_id'] = 'field_seed_family_value_op';
  $handler->display->display_options['filters']['field_seed_family_value']['expose']['label'] = 'Family';
  $handler->display->display_options['filters']['field_seed_family_value']['expose']['operator'] = 'field_seed_family_value_op';
  $handler->display->display_options['filters']['field_seed_family_value']['expose']['identifier'] = 'family';
  $handler->display->display_options['filters']['field_seed_family_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Genus (field_seed_genus) */
  $handler->display->display_options['filters']['field_seed_genus_value']['id'] = 'field_seed_genus_value';
  $handler->display->display_options['filters']['field_seed_genus_value']['table'] = 'field_data_field_seed_genus';
  $handler->display->display_options['filters']['field_seed_genus_value']['field'] = 'field_seed_genus_value';
  $handler->display->display_options['filters']['field_seed_genus_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_seed_genus_value']['group'] = 1;
  $handler->display->display_options['filters']['field_seed_genus_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_seed_genus_value']['expose']['operator_id'] = 'field_seed_genus_value_op';
  $handler->display->display_options['filters']['field_seed_genus_value']['expose']['label'] = 'Genus';
  $handler->display->display_options['filters']['field_seed_genus_value']['expose']['operator'] = 'field_seed_genus_value_op';
  $handler->display->display_options['filters']['field_seed_genus_value']['expose']['identifier'] = 'genus';
  $handler->display->display_options['filters']['field_seed_genus_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Species (field_seed_species) */
  $handler->display->display_options['filters']['field_seed_species_value']['id'] = 'field_seed_species_value';
  $handler->display->display_options['filters']['field_seed_species_value']['table'] = 'field_data_field_seed_species';
  $handler->display->display_options['filters']['field_seed_species_value']['field'] = 'field_seed_species_value';
  $handler->display->display_options['filters']['field_seed_species_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_seed_species_value']['group'] = 1;
  $handler->display->display_options['filters']['field_seed_species_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_seed_species_value']['expose']['operator_id'] = 'field_seed_species_value_op';
  $handler->display->display_options['filters']['field_seed_species_value']['expose']['label'] = 'Species';
  $handler->display->display_options['filters']['field_seed_species_value']['expose']['operator'] = 'field_seed_species_value_op';
  $handler->display->display_options['filters']['field_seed_species_value']['expose']['identifier'] = 'species';
  $handler->display->display_options['filters']['field_seed_species_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Variety (field_seed_variety) */
  $handler->display->display_options['filters']['field_seed_variety_value']['id'] = 'field_seed_variety_value';
  $handler->display->display_options['filters']['field_seed_variety_value']['table'] = 'field_data_field_seed_variety';
  $handler->display->display_options['filters']['field_seed_variety_value']['field'] = 'field_seed_variety_value';
  $handler->display->display_options['filters']['field_seed_variety_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_seed_variety_value']['group'] = 1;
  $handler->display->display_options['filters']['field_seed_variety_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_seed_variety_value']['expose']['operator_id'] = 'field_seed_variety_value_op';
  $handler->display->display_options['filters']['field_seed_variety_value']['expose']['label'] = 'Variety';
  $handler->display->display_options['filters']['field_seed_variety_value']['expose']['operator'] = 'field_seed_variety_value_op';
  $handler->display->display_options['filters']['field_seed_variety_value']['expose']['identifier'] = 'variety';
  $handler->display->display_options['filters']['field_seed_variety_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Cultivar (field_seed_cultivar) */
  $handler->display->display_options['filters']['field_seed_cultivar_value']['id'] = 'field_seed_cultivar_value';
  $handler->display->display_options['filters']['field_seed_cultivar_value']['table'] = 'field_data_field_seed_cultivar';
  $handler->display->display_options['filters']['field_seed_cultivar_value']['field'] = 'field_seed_cultivar_value';
  $handler->display->display_options['filters']['field_seed_cultivar_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_seed_cultivar_value']['group'] = 1;
  $handler->display->display_options['filters']['field_seed_cultivar_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_seed_cultivar_value']['expose']['operator_id'] = 'field_seed_cultivar_value_op';
  $handler->display->display_options['filters']['field_seed_cultivar_value']['expose']['label'] = 'Cultivar';
  $handler->display->display_options['filters']['field_seed_cultivar_value']['expose']['operator'] = 'field_seed_cultivar_value_op';
  $handler->display->display_options['filters']['field_seed_cultivar_value']['expose']['identifier'] = 'cultivar';
  $handler->display->display_options['filters']['field_seed_cultivar_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Difficulty rating (field_seed_difficulty_rating) */
  $handler->display->display_options['filters']['field_seed_difficulty_rating_value']['id'] = 'field_seed_difficulty_rating_value';
  $handler->display->display_options['filters']['field_seed_difficulty_rating_value']['table'] = 'field_data_field_seed_difficulty_rating';
  $handler->display->display_options['filters']['field_seed_difficulty_rating_value']['field'] = 'field_seed_difficulty_rating_value';
  $handler->display->display_options['filters']['field_seed_difficulty_rating_value']['group'] = 1;
  $handler->display->display_options['filters']['field_seed_difficulty_rating_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_seed_difficulty_rating_value']['expose']['operator_id'] = 'field_seed_difficulty_rating_value_op';
  $handler->display->display_options['filters']['field_seed_difficulty_rating_value']['expose']['label'] = 'Difficulty';
  $handler->display->display_options['filters']['field_seed_difficulty_rating_value']['expose']['operator'] = 'field_seed_difficulty_rating_value_op';
  $handler->display->display_options['filters']['field_seed_difficulty_rating_value']['expose']['identifier'] = 'difficulty';
  $handler->display->display_options['filters']['field_seed_difficulty_rating_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'full-library';
  $export['library'] = $view;

  $view = new view();
  $view->name = 'transaction_history';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Transaction History';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'History';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'check out seeds';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_transaction_type' => 'field_transaction_type',
    'field_transaction_quantity' => 'field_transaction_quantity',
    'field_transaction_seed' => 'field_transaction_seed',
    'created' => 'created',
    'checkin_seeds' => 'checkin_seeds',
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_transaction_type']['id'] = 'field_transaction_type';
  $handler->display->display_options['fields']['field_transaction_type']['table'] = 'field_data_field_transaction_type';
  $handler->display->display_options['fields']['field_transaction_type']['field'] = 'field_transaction_type';
  $handler->display->display_options['fields']['field_transaction_type']['label'] = '';
  $handler->display->display_options['fields']['field_transaction_type']['element_label_colon'] = FALSE;
  /* Field: Content: Quantity */
  $handler->display->display_options['fields']['field_transaction_quantity']['id'] = 'field_transaction_quantity';
  $handler->display->display_options['fields']['field_transaction_quantity']['table'] = 'field_data_field_transaction_quantity';
  $handler->display->display_options['fields']['field_transaction_quantity']['field'] = 'field_transaction_quantity';
  $handler->display->display_options['fields']['field_transaction_quantity']['label'] = '';
  $handler->display->display_options['fields']['field_transaction_quantity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_transaction_quantity']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Seed */
  $handler->display->display_options['fields']['field_transaction_seed']['id'] = 'field_transaction_seed';
  $handler->display->display_options['fields']['field_transaction_seed']['table'] = 'field_data_field_transaction_seed';
  $handler->display->display_options['fields']['field_transaction_seed']['field'] = 'field_transaction_seed';
  $handler->display->display_options['fields']['field_transaction_seed']['label'] = '';
  $handler->display->display_options['fields']['field_transaction_seed']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_transaction_seed']['alter']['text'] = '[field_transaction_seed] seeds';
  $handler->display->display_options['fields']['field_transaction_seed']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = 'on [created]';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Content: Checkin link */
  $handler->display->display_options['fields']['checkin_seeds']['id'] = 'checkin_seeds';
  $handler->display->display_options['fields']['checkin_seeds']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['checkin_seeds']['field'] = 'checkin_seeds';
  $handler->display->display_options['fields']['checkin_seeds']['label'] = '';
  $handler->display->display_options['fields']['checkin_seeds']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: User (field_transaction_user) */
  $handler->display->display_options['arguments']['field_transaction_user_uid']['id'] = 'field_transaction_user_uid';
  $handler->display->display_options['arguments']['field_transaction_user_uid']['table'] = 'field_data_field_transaction_user';
  $handler->display->display_options['arguments']['field_transaction_user_uid']['field'] = 'field_transaction_user_uid';
  $handler->display->display_options['arguments']['field_transaction_user_uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_transaction_user_uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_transaction_user_uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_transaction_user_uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_transaction_user_uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'transaction' => 'transaction',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'transaction_history_block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $export['transaction_history'] = $view;

  return $export;
}
