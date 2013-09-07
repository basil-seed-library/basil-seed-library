<?php
/**
 * @file
 * seedlibrary_general.box.inc
 */

/**
 * Implements hook_default_box().
 */
function seedlibrary_general_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'checkin_link';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Checkin link';
  $box->options = array(
    'body' => array(
      'value' => '<h3>Can&#39;t find the seed you want to <a href="plant/new/checkin"><span data-scayt_word="checkin" data-scaytid="1">checkin</span></a>?</h3>',
      'format' => 'filtered_html',
    ),
    'additional_classes' => '',
  );
  $export['checkin_link'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'user_intro_text';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'User intro text';
  $box->options = array(
    'body' => array(
      'value' => '<p>Please go watch the video if you haven&#39;t already!</p>',
      'format' => 'filtered_html',
    ),
  );
  $export['user_intro_text'] = $box;

  return $export;
}
