<?php
/**
 * @file
 * schemax_slideshow.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function schemax_slideshow_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'schemax_slide_show';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Slide show';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['captionfield'] = 'title_1';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_schemax_slides_target_id']['id'] = 'field_schemax_slides_target_id';
  $handler->display->display_options['relationships']['field_schemax_slides_target_id']['table'] = 'field_data_field_schemax_slides';
  $handler->display->display_options['relationships']['field_schemax_slides_target_id']['field'] = 'field_schemax_slides_target_id';
  $handler->display->display_options['relationships']['field_schemax_slides_target_id']['required'] = TRUE;
  /* Field: Slide: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'eck_slide';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_schemax_slides_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Slide: Link */
  $handler->display->display_options['fields']['field_schemax_link_1']['id'] = 'field_schemax_link_1';
  $handler->display->display_options['fields']['field_schemax_link_1']['table'] = 'field_data_field_schemax_link';
  $handler->display->display_options['fields']['field_schemax_link_1']['field'] = 'field_schemax_link';
  $handler->display->display_options['fields']['field_schemax_link_1']['relationship'] = 'field_schemax_slides_target_id';
  $handler->display->display_options['fields']['field_schemax_link_1']['label'] = '';
  $handler->display->display_options['fields']['field_schemax_link_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_schemax_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_schemax_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_schemax_link_1']['type'] = 'link_plain';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_schemax_slides_target_id';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[field_schemax_link_1]';
  $handler->display->display_options['fields']['field_image']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = TRUE;
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'slideshow';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $translatables['schemax_slide_show'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Slide entity referenced from field_schemax_slides'),
    t('Page'),
    t('Content pane'),
    t('View panes'),
  );
  $export['schemax_slide_show'] = $view;

  return $export;
}
