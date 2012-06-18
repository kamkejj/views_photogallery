<?php
/**
 * @file
 * views_photogallery.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_photogallery_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'gallery_photos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gallery Photos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Gallery Photos';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_gallery_photo']['id'] = 'field_gallery_photo';
  $handler->display->display_options['fields']['field_gallery_photo']['table'] = 'field_data_field_gallery_photo';
  $handler->display->display_options['fields']['field_gallery_photo']['field'] = 'field_gallery_photo';
  $handler->display->display_options['fields']['field_gallery_photo']['label'] = '';
  $handler->display->display_options['fields']['field_gallery_photo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_gallery_photo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_gallery_photo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_gallery_photo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_gallery_photo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_gallery_photo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_gallery_photo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_gallery_photo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_gallery_photo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_gallery_photo']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_gallery_photo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_gallery_photo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_gallery_photo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_gallery_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_photo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_gallery_photo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_gallery_photo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_gallery_photo']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_gallery_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_photo']['settings'] = array(
    'image_style' => 'gallery_thumb',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_gallery_photo']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Gallery (field_gallery) */
  $handler->display->display_options['arguments']['field_gallery_nid']['id'] = 'field_gallery_nid';
  $handler->display->display_options['arguments']['field_gallery_nid']['table'] = 'field_data_field_gallery';
  $handler->display->display_options['arguments']['field_gallery_nid']['field'] = 'field_gallery_nid';
  $handler->display->display_options['arguments']['field_gallery_nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_gallery_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_gallery_nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_gallery_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_gallery_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_gallery_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_gallery_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_gallery_nid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'gallery';

  /* Display: Gallery */
  $handler = $view->new_display('entity_view', 'Gallery', 'entity_view_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'gallery',
  );
  $export['gallery_photos'] = $view;

  return $export;
}
