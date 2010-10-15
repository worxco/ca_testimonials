<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ca_testimonials_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function ca_testimonials_node_info() {
  $items = array(
    'ca_testimonial' => array(
      'name' => t('Testimonial'),
      'module' => 'features',
      'description' => t('This content type is used to create testimonial entries.  These entries can be sorted through a variety of provided views or you may create your own view.'),
      'has_title' => '1',
      'title_label' => t('Client Name'),
      'has_body' => '1',
      'body_label' => t('Testimonial'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function ca_testimonials_views_api() {
  return array(
    'api' => '2',
  );
}
