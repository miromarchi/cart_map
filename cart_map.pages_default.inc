<?php
/**
 * @file
 * cart_map.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function cart_map_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'cart_map';
  $page->task = 'page';
  $page->admin_title = 'Cart Map';
  $page->admin_description = '';
  $page->path = 'map';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Map',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_cart_map_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'cart_map';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'unico';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'center' => NULL,
      'side' => NULL,
      'middle' => NULL,
      'contentmain' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Cuban Art Exhibits Map';
  $display->uuid = '584e7d29-f134-4e54-9770-8852d8c00800';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-dae21749-f2c7-455e-a7dd-9a59ded3c7e0';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'cart_view_map-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'dae21749-f2c7-455e-a7dd-9a59ded3c7e0';
    $display->content['new-dae21749-f2c7-455e-a7dd-9a59ded3c7e0'] = $pane;
    $display->panels['contentmain'][0] = 'new-dae21749-f2c7-455e-a7dd-9a59ded3c7e0';
    $pane = new stdClass();
    $pane->pid = 'new-f5a14d5b-bb60-401c-88b5-d4f43e400893';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'cart_view_map-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f5a14d5b-bb60-401c-88b5-d4f43e400893';
    $display->content['new-f5a14d5b-bb60-401c-88b5-d4f43e400893'] = $pane;
    $display->panels['contentmain'][1] = 'new-f5a14d5b-bb60-401c-88b5-d4f43e400893';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-dae21749-f2c7-455e-a7dd-9a59ded3c7e0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['cart_map'] = $page;

  return $pages;

}
