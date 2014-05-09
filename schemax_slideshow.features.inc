<?php
/**
 * @file
 * schemax_slideshow.features.inc
 */

/**
 * Implements hook_views_api().
 */
function schemax_slideshow_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_eck_bundle_info().
 */
function schemax_slideshow_eck_bundle_info() {
  $items = array(
    'slide_slide' => array(
      'machine_name' => 'slide_slide',
      'entity_type' => 'slide',
      'name' => 'slide',
      'label' => 'Slide',
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function schemax_slideshow_eck_entity_type_info() {
  $items = array(
    'slide' => array(
      'name' => 'slide',
      'label' => 'Slide',
      'properties' => array(
        'title' => array(
          'label' => 'Title',
          'type' => 'text',
          'behavior' => 'title',
        ),
        'uid' => array(
          'label' => 'Author',
          'type' => 'integer',
          'behavior' => 'author',
        ),
        'created' => array(
          'label' => 'Created',
          'type' => 'integer',
          'behavior' => 'created',
        ),
        'changed' => array(
          'label' => 'Changed',
          'type' => 'integer',
          'behavior' => 'changed',
        ),
        'language' => array(
          'label' => 'Entity language',
          'type' => 'language',
          'behavior' => 'language',
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implements hook_node_info().
 */
function schemax_slideshow_node_info() {
  $items = array(
    'schemax_slideshow' => array(
      'name' => t('Slideshow'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
