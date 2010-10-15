<?php

/**
 * Implementation of hook_default_page_manager_pages().
 */
function ca_testimonials_default_page_manager_pages() {
  $page = new stdClass;
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'add_testimonial';
  $page->task = 'page';
  $page->admin_title = 'Add Testimonial';
  $page->admin_description = '';
  $page->path = 'testimonials/add_testimonial';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'create ca_testimonial content',
        ),
        'context' => 'logged-in-user',
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Add Testimonial',
    'name' => 'navigation',
    'weight' => '1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_add_testimonial_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'add_testimonial';
  $handler->handler = 'menu_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Context Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'context_admin_options' => 'node_create_menu',
    'context_admin_options_items' => 'ca_testimonial',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['add_testimonial'] = $page;

  $page = new stdClass;
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'testimonials_admin';
  $page->task = 'page';
  $page->admin_title = 'Testimonials Administration';
  $page->admin_description = '';
  $page->path = 'testimonials/admin/manage';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'administer nodes',
        ),
        'context' => 'logged-in-user',
      ),
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
          ),
        ),
        'context' => 'logged-in-user',
      ),
    ),
    'logic' => 'or',
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Manage',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Administer',
      'name' => 'navigation',
      'weight' => '10',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_testimonials_admin_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'testimonials_admin';
  $handler->handler = 'menu_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Context Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'context_admin_options' => 'views_bulk_menu',
    'context_admin_vbo_views_bulk_node_type' => 'ca_testimonial',
    'context_admin_vbo_views_bulk_published' => 'both',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['testimonials_admin'] = $page;

 return $pages;

}
