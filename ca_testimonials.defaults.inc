<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _ca_testimonials_content_default_fields() {
  $fields = array();

  // Exported field: field_ca_testimonial_link
  $fields[] = array(
    'field_name' => 'field_ca_testimonial_link',
    'type_name' => 'ca_testimonial',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '1',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => '_blank',
      'rel' => '',
      'class' => 'testimonial_link',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'required',
    'title_value' => '',
    'enable_tokens' => 0,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Client Link',
      'weight' => '-3',
      'description' => '',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Translatables
  array(
    t('Client Link'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _ca_testimonials_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  else if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_default_page_manager_pages().
 */
function _ca_testimonials_default_page_manager_pages() {
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
      '0' => array(
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
      '0' => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'administer nodes',
        ),
        'context' => 'logged-in-user',
      ),
      '1' => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            '0' => 3,
            '1' => 4,
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

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _ca_testimonials_user_default_permissions() {
  $permissions = array();

  // Exported permission: create ca_testimonial content
  $permissions[] = array(
    'name' => 'create ca_testimonial content',
    'roles' => array(
      '0' => 'administrative user',
      '1' => 'webmaster',
    ),
  );

  // Exported permission: delete any ca_testimonial content
  $permissions[] = array(
    'name' => 'delete any ca_testimonial content',
    'roles' => array(
      '0' => 'administrative user',
      '1' => 'webmaster',
    ),
  );

  // Exported permission: delete own ca_testimonial content
  $permissions[] = array(
    'name' => 'delete own ca_testimonial content',
    'roles' => array(
      '0' => 'administrative user',
      '1' => 'webmaster',
    ),
  );

  // Exported permission: edit any ca_testimonial content
  $permissions[] = array(
    'name' => 'edit any ca_testimonial content',
    'roles' => array(
      '0' => 'administrative user',
      '1' => 'webmaster',
    ),
  );

  // Exported permission: edit own ca_testimonial content
  $permissions[] = array(
    'name' => 'edit own ca_testimonial content',
    'roles' => array(
      '0' => 'administrative user',
      '1' => 'webmaster',
    ),
  );

  return $permissions;
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _ca_testimonials_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_ca_testimonial';
  $strongarm->value = '4';

  $export['comment_default_mode_ca_testimonial'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ca_testimonial';
  $strongarm->value = array(
    '0' => 'status',
  );

  $export['node_options_ca_testimonial'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ca_testimonial_pattern';
  $strongarm->value = 'testimonials/[title-raw]';

  $export['pathauto_node_ca_testimonial_pattern'] = $strongarm;
  return $export;
}
