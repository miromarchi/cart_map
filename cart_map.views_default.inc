<?php
/**
 * @file
 * cart_map.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cart_map_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'cart_view_map';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Cart map';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Map';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'ip_geoloc_leaflet';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => '',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_latitude'] = 'field_cart_geolocation';
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_longitude'] = '';
  $handler->display->display_options['style_options']['center_option'] = '2';
  $handler->display->display_options['style_options']['empty_map_center'] = 'b)';
  $handler->display->display_options['style_options']['map'] = 'stamen-toner';
  $handler->display->display_options['style_options']['map_height'] = '400';
  $handler->display->display_options['style_options']['cluster_radius'] = '100';
  $handler->display->display_options['style_options']['tooltips']['marker_tooltip'] = 'title';
  $handler->display->display_options['style_options']['map_options']['maxzoom'] = '18';
  $handler->display->display_options['style_options']['map_options']['zoom'] = '2';
  $handler->display->display_options['style_options']['map_options']['scrollwheelzoom'] = '1';
  $handler->display->display_options['style_options']['map_options']['dragging'] = '1';
  /* Relationship: referenced from field_cart_venue */
  $handler->display->display_options['relationships']['field_cart_venue_target_id']['id'] = 'field_cart_venue_target_id';
  $handler->display->display_options['relationships']['field_cart_venue_target_id']['table'] = 'field_data_field_cart_venue';
  $handler->display->display_options['relationships']['field_cart_venue_target_id']['field'] = 'field_cart_venue_target_id';
  $handler->display->display_options['relationships']['field_cart_venue_target_id']['ui_name'] = 'referenced from field_cart_venue';
  $handler->display->display_options['relationships']['field_cart_venue_target_id']['label'] = 'referenced from field_cart_venue';
  /* Relationship: referenced from field_cart_artist */
  $handler->display->display_options['relationships']['field_cart_artist_target_id']['id'] = 'field_cart_artist_target_id';
  $handler->display->display_options['relationships']['field_cart_artist_target_id']['table'] = 'field_data_field_cart_artist';
  $handler->display->display_options['relationships']['field_cart_artist_target_id']['field'] = 'field_cart_artist_target_id';
  $handler->display->display_options['relationships']['field_cart_artist_target_id']['ui_name'] = 'referenced from field_cart_artist';
  $handler->display->display_options['relationships']['field_cart_artist_target_id']['label'] = 'referenced from field_cart_artist';
  /* Relationship: referenced from field_cart_curator */
  $handler->display->display_options['relationships']['field_cart_curator_target_id']['id'] = 'field_cart_curator_target_id';
  $handler->display->display_options['relationships']['field_cart_curator_target_id']['table'] = 'field_data_field_cart_curator';
  $handler->display->display_options['relationships']['field_cart_curator_target_id']['field'] = 'field_cart_curator_target_id';
  $handler->display->display_options['relationships']['field_cart_curator_target_id']['ui_name'] = 'referenced from field_cart_curator';
  $handler->display->display_options['relationships']['field_cart_curator_target_id']['label'] = 'referenced from field_cart_curator';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_cart_image']['id'] = 'field_cart_image';
  $handler->display->display_options['fields']['field_cart_image']['table'] = 'field_data_field_cart_image';
  $handler->display->display_options['fields']['field_cart_image']['field'] = 'field_cart_image';
  $handler->display->display_options['fields']['field_cart_image']['label'] = '';
  $handler->display->display_options['fields']['field_cart_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cart_image']['settings'] = array(
    'image_style' => 'cart_img_square_thumb',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_cart_date']['id'] = 'field_cart_date';
  $handler->display->display_options['fields']['field_cart_date']['table'] = 'field_data_field_cart_date';
  $handler->display->display_options['fields']['field_cart_date']['field'] = 'field_cart_date';
  $handler->display->display_options['fields']['field_cart_date']['label'] = '';
  $handler->display->display_options['fields']['field_cart_date']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_cart_date']['element_class'] = 'date';
  $handler->display->display_options['fields']['field_cart_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_cart_venue_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'span';
  $handler->display->display_options['fields']['title_1']['element_class'] = 'venue';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_cart_location']['id'] = 'field_cart_location';
  $handler->display->display_options['fields']['field_cart_location']['table'] = 'field_data_field_cart_location';
  $handler->display->display_options['fields']['field_cart_location']['field'] = 'field_cart_location';
  $handler->display->display_options['fields']['field_cart_location']['relationship'] = 'field_cart_venue_target_id';
  $handler->display->display_options['fields']['field_cart_location']['label'] = '';
  $handler->display->display_options['fields']['field_cart_location']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_cart_location']['element_class'] = 'location';
  $handler->display->display_options['fields']['field_cart_location']['element_label_colon'] = FALSE;
  /* Field: Content: Geolocation */
  $handler->display->display_options['fields']['field_cart_geolocation']['id'] = 'field_cart_geolocation';
  $handler->display->display_options['fields']['field_cart_geolocation']['table'] = 'field_data_field_cart_geolocation';
  $handler->display->display_options['fields']['field_cart_geolocation']['field'] = 'field_cart_geolocation';
  $handler->display->display_options['fields']['field_cart_geolocation']['relationship'] = 'field_cart_venue_target_id';
  $handler->display->display_options['fields']['field_cart_geolocation']['label'] = '';
  $handler->display->display_options['fields']['field_cart_geolocation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cart_geolocation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_geolocation']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_cart_geolocation']['type'] = 'geofield_latlon';
  $handler->display->display_options['fields']['field_cart_geolocation']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
    'labels' => 1,
  );
  /* Field: Content: Artist/s */
  $handler->display->display_options['fields']['field_cart_artist']['id'] = 'field_cart_artist';
  $handler->display->display_options['fields']['field_cart_artist']['table'] = 'field_data_field_cart_artist';
  $handler->display->display_options['fields']['field_cart_artist']['field'] = 'field_cart_artist';
  $handler->display->display_options['fields']['field_cart_artist']['label'] = 'Artist/s: ';
  $handler->display->display_options['fields']['field_cart_artist']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_cart_artist']['element_class'] = 'artists';
  $handler->display->display_options['fields']['field_cart_artist']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_cart_artist']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_artist']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cart_artist']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_cart_artist']['delta_offset'] = '0';
  /* Field: Content: Curator/s */
  $handler->display->display_options['fields']['field_cart_curator']['id'] = 'field_cart_curator';
  $handler->display->display_options['fields']['field_cart_curator']['table'] = 'field_data_field_cart_curator';
  $handler->display->display_options['fields']['field_cart_curator']['field'] = 'field_cart_curator';
  $handler->display->display_options['fields']['field_cart_curator']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_cart_curator']['element_class'] = 'curators';
  $handler->display->display_options['fields']['field_cart_curator']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_cart_curator']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cart_curator']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_cart_curator']['delta_offset'] = '0';
  /* Sort criterion: Content: Date -  start date (field_cart_date) */
  $handler->display->display_options['sorts']['field_cart_date_value']['id'] = 'field_cart_date_value';
  $handler->display->display_options['sorts']['field_cart_date_value']['table'] = 'field_data_field_cart_date';
  $handler->display->display_options['sorts']['field_cart_date_value']['field'] = 'field_cart_date_value';
  $handler->display->display_options['sorts']['field_cart_date_value']['order'] = 'DESC';
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
    'cart_exhibition' => 'cart_exhibition',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Geolocation (field_cart_geolocation:lat) */
  $handler->display->display_options['filters']['field_cart_geolocation_lat']['id'] = 'field_cart_geolocation_lat';
  $handler->display->display_options['filters']['field_cart_geolocation_lat']['table'] = 'field_data_field_cart_geolocation';
  $handler->display->display_options['filters']['field_cart_geolocation_lat']['field'] = 'field_cart_geolocation_lat';
  $handler->display->display_options['filters']['field_cart_geolocation_lat']['relationship'] = 'field_cart_venue_target_id';
  $handler->display->display_options['filters']['field_cart_geolocation_lat']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_cart_geolocation_lat']['group'] = 1;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'From date';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '-10:+0';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_cart_date.field_cart_date_value' => 'field_data_field_cart_date.field_cart_date_value',
    'field_data_field_cart_date.field_cart_date_value2' => 'field_data_field_cart_date.field_cart_date_value2',
  );
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter_1']['id'] = 'date_filter_1';
  $handler->display->display_options['filters']['date_filter_1']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter_1']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter_1']['operator'] = '<=';
  $handler->display->display_options['filters']['date_filter_1']['group'] = 1;
  $handler->display->display_options['filters']['date_filter_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter_1']['expose']['operator_id'] = 'date_filter_1_op';
  $handler->display->display_options['filters']['date_filter_1']['expose']['label'] = 'To date';
  $handler->display->display_options['filters']['date_filter_1']['expose']['operator'] = 'date_filter_1_op';
  $handler->display->display_options['filters']['date_filter_1']['expose']['identifier'] = 'date_filter_1';
  $handler->display->display_options['filters']['date_filter_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['date_filter_1']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter_1']['year_range'] = '-10:+3';
  $handler->display->display_options['filters']['date_filter_1']['date_fields'] = array(
    'field_data_field_cart_date.field_cart_date_value' => 'field_data_field_cart_date.field_cart_date_value',
    'field_data_field_cart_date.field_cart_date_value2' => 'field_data_field_cart_date.field_cart_date_value2',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Exhibition';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Location (field_cart_location) */
  $handler->display->display_options['filters']['field_cart_location_value']['id'] = 'field_cart_location_value';
  $handler->display->display_options['filters']['field_cart_location_value']['table'] = 'field_data_field_cart_location';
  $handler->display->display_options['filters']['field_cart_location_value']['field'] = 'field_cart_location_value';
  $handler->display->display_options['filters']['field_cart_location_value']['relationship'] = 'field_cart_venue_target_id';
  $handler->display->display_options['filters']['field_cart_location_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_cart_location_value']['group'] = 1;
  $handler->display->display_options['filters']['field_cart_location_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cart_location_value']['expose']['operator_id'] = 'field_cart_location_value_op';
  $handler->display->display_options['filters']['field_cart_location_value']['expose']['label'] = 'City';
  $handler->display->display_options['filters']['field_cart_location_value']['expose']['operator'] = 'field_cart_location_value_op';
  $handler->display->display_options['filters']['field_cart_location_value']['expose']['identifier'] = 'field_cart_location_value';
  $handler->display->display_options['filters']['field_cart_location_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['relationship'] = 'field_cart_artist_target_id';
  $handler->display->display_options['filters']['title_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_1']['group'] = 1;
  $handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['label'] = 'Artist';
  $handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_2']['id'] = 'title_2';
  $handler->display->display_options['filters']['title_2']['table'] = 'node';
  $handler->display->display_options['filters']['title_2']['field'] = 'title';
  $handler->display->display_options['filters']['title_2']['relationship'] = 'field_cart_curator_target_id';
  $handler->display->display_options['filters']['title_2']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_2']['group'] = 1;
  $handler->display->display_options['filters']['title_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_2']['expose']['operator_id'] = 'title_2_op';
  $handler->display->display_options['filters']['title_2']['expose']['label'] = 'Curator';
  $handler->display->display_options['filters']['title_2']['expose']['operator'] = 'title_2_op';
  $handler->display->display_options['filters']['title_2']['expose']['identifier'] = 'title_2';
  $handler->display->display_options['filters']['title_2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Art Media types (field_cart_media_types) */
  $handler->display->display_options['filters']['field_cart_media_types_tid']['id'] = 'field_cart_media_types_tid';
  $handler->display->display_options['filters']['field_cart_media_types_tid']['table'] = 'field_data_field_cart_media_types';
  $handler->display->display_options['filters']['field_cart_media_types_tid']['field'] = 'field_cart_media_types_tid';
  $handler->display->display_options['filters']['field_cart_media_types_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_cart_media_types_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cart_media_types_tid']['expose']['operator_id'] = 'field_cart_media_types_tid_op';
  $handler->display->display_options['filters']['field_cart_media_types_tid']['expose']['label'] = 'Art Media types';
  $handler->display->display_options['filters']['field_cart_media_types_tid']['expose']['operator'] = 'field_cart_media_types_tid_op';
  $handler->display->display_options['filters']['field_cart_media_types_tid']['expose']['identifier'] = 'field_cart_media_types_tid';
  $handler->display->display_options['filters']['field_cart_media_types_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_cart_media_types_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_cart_media_types_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_cart_media_types_tid']['vocabulary'] = 'cart_media_types';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['path'] = 'map';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Map';
  $handler->display->display_options['menu']['description'] = 'Where are cuban art exhibits hosted?';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'maplist';

  /* Display: Map pane */
  $handler = $view->new_display('panel_pane', 'Map pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Cart panes';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: LIst pane */
  $handler = $view->new_display('panel_pane', 'LIst pane', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'masonry_views';
  $handler->display->display_options['style_options']['row_class'] = 'col-sm-6 col-md-4';
  $handler->display->display_options['style_options']['masonry_column_width_units'] = '%';
  $handler->display->display_options['style_options']['masonry_resizable'] = TRUE;
  $handler->display->display_options['style_options']['masonry_animated'] = TRUE;
  $handler->display->display_options['style_options']['masonry_fit_width'] = FALSE;
  $handler->display->display_options['style_options']['masonry_rtl'] = FALSE;
  $handler->display->display_options['style_options']['masonry_images_first'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_cart_image']['id'] = 'field_cart_image';
  $handler->display->display_options['fields']['field_cart_image']['table'] = 'field_data_field_cart_image';
  $handler->display->display_options['fields']['field_cart_image']['field'] = 'field_cart_image';
  $handler->display->display_options['fields']['field_cart_image']['label'] = '';
  $handler->display->display_options['fields']['field_cart_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cart_image']['settings'] = array(
    'image_style' => 'cart_img_cover',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_cart_date']['id'] = 'field_cart_date';
  $handler->display->display_options['fields']['field_cart_date']['table'] = 'field_data_field_cart_date';
  $handler->display->display_options['fields']['field_cart_date']['field'] = 'field_cart_date';
  $handler->display->display_options['fields']['field_cart_date']['label'] = '';
  $handler->display->display_options['fields']['field_cart_date']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_cart_date']['element_class'] = 'date';
  $handler->display->display_options['fields']['field_cart_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_cart_venue_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'span';
  $handler->display->display_options['fields']['title_1']['element_class'] = 'venue';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_cart_location']['id'] = 'field_cart_location';
  $handler->display->display_options['fields']['field_cart_location']['table'] = 'field_data_field_cart_location';
  $handler->display->display_options['fields']['field_cart_location']['field'] = 'field_cart_location';
  $handler->display->display_options['fields']['field_cart_location']['relationship'] = 'field_cart_venue_target_id';
  $handler->display->display_options['fields']['field_cart_location']['label'] = '';
  $handler->display->display_options['fields']['field_cart_location']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_cart_location']['element_class'] = 'location';
  $handler->display->display_options['fields']['field_cart_location']['element_label_colon'] = FALSE;
  /* Field: Content: Geolocation */
  $handler->display->display_options['fields']['field_cart_geolocation']['id'] = 'field_cart_geolocation';
  $handler->display->display_options['fields']['field_cart_geolocation']['table'] = 'field_data_field_cart_geolocation';
  $handler->display->display_options['fields']['field_cart_geolocation']['field'] = 'field_cart_geolocation';
  $handler->display->display_options['fields']['field_cart_geolocation']['relationship'] = 'field_cart_venue_target_id';
  $handler->display->display_options['fields']['field_cart_geolocation']['label'] = '';
  $handler->display->display_options['fields']['field_cart_geolocation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cart_geolocation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_geolocation']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_cart_geolocation']['type'] = 'geofield_latlon';
  $handler->display->display_options['fields']['field_cart_geolocation']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
    'labels' => 1,
  );
  /* Field: Content: Artist/s */
  $handler->display->display_options['fields']['field_cart_artist']['id'] = 'field_cart_artist';
  $handler->display->display_options['fields']['field_cart_artist']['table'] = 'field_data_field_cart_artist';
  $handler->display->display_options['fields']['field_cart_artist']['field'] = 'field_cart_artist';
  $handler->display->display_options['fields']['field_cart_artist']['label'] = 'Artist/s: ';
  $handler->display->display_options['fields']['field_cart_artist']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_cart_artist']['element_class'] = 'artists';
  $handler->display->display_options['fields']['field_cart_artist']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_cart_artist']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cart_artist']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cart_artist']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_cart_artist']['delta_offset'] = '0';
  /* Field: Content: Curator/s */
  $handler->display->display_options['fields']['field_cart_curator']['id'] = 'field_cart_curator';
  $handler->display->display_options['fields']['field_cart_curator']['table'] = 'field_data_field_cart_curator';
  $handler->display->display_options['fields']['field_cart_curator']['field'] = 'field_cart_curator';
  $handler->display->display_options['fields']['field_cart_curator']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_cart_curator']['element_class'] = 'curators';
  $handler->display->display_options['fields']['field_cart_curator']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_cart_curator']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cart_curator']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_cart_curator']['delta_offset'] = '0';
  $handler->display->display_options['pane_category']['name'] = 'Cart panes';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['cart_view_map'] = $view;

  return $export;
}
