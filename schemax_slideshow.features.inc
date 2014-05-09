<?php
/**
 * @file
 * schemax_slideshow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function schemax_slideshow_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

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
      'config' => array(
        'extra_fields' => array(
          'title' => array(
            'form' => array(
              'label' => 'Title',
              'description' => '',
              'widget' => array(
                'type' => 'text',
                'settings' => array(
                  'size' => 60,
                  'max_length' => 255,
                ),
              ),
              'default_value' => '',
            ),
          ),
        ),
      ),
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
          'schema' => NULL,
        ),
        'uid' => array(
          'label' => 'Author',
          'type' => 'integer',
          'behavior' => 'author',
          'schema' => NULL,
        ),
        'created' => array(
          'label' => 'Created',
          'type' => 'integer',
          'behavior' => 'created',
          'schema' => NULL,
        ),
        'changed' => array(
          'label' => 'Changed',
          'type' => 'integer',
          'behavior' => 'changed',
          'schema' => NULL,
        ),
        'language' => array(
          'label' => 'Entity language',
          'type' => 'language',
          'behavior' => 'language',
          'schema' => NULL,
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
