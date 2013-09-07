<?php
/**
 * @file
 * seedlibrary_general.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function seedlibrary_general_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'library_listings';
  $context->description = 'Available and Full library listings';
  $context->tag = '';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'library' => 'library',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-checkin_link' => array(
          'module' => 'boxes',
          'delta' => 'checkin_link',
          'region' => 'content',
          'weight' => '-16',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Available and Full library listings');
  $export['library_listings'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'delta_blocks-messages' => array(
          'module' => 'delta_blocks',
          'delta' => 'messages',
          'region' => 'content',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['sitewide'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'user_profile';
  $context->description = 'Appears on user profiles';
  $context->tag = 'user';
  $context->conditions = array(
    'user_page' => array(
      'values' => array(
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'current',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'delta_blocks-messages' => array(
          'module' => 'delta_blocks',
          'delta' => 'messages',
          'region' => 'content',
          'weight' => '-10',
        ),
        'boxes-user_intro_text' => array(
          'module' => 'boxes',
          'delta' => 'user_intro_text',
          'region' => 'content',
          'weight' => '-9',
        ),
        'boxes-checkin_link' => array(
          'module' => 'boxes',
          'delta' => 'checkin_link',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-74a63a89369640cbd3bb456e90cd98d1' => array(
          'module' => 'views',
          'delta' => '74a63a89369640cbd3bb456e90cd98d1',
          'region' => 'content',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Appears on user profiles');
  t('user');
  $export['user_profile'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'user_registration';
  $context->description = 'User registration page';
  $context->tag = 'user';
  $context->conditions = array(
    'user_page' => array(
      'values' => array(
        'register' => 'register',
      ),
      'options' => array(
        'mode' => 'all',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-user_intro_text' => array(
          'module' => 'boxes',
          'delta' => 'user_intro_text',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('User registration page');
  t('user');
  $export['user_registration'] = $context;

  return $export;
}
