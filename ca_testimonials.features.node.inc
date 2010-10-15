<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _ca_testimonials_node_info() {
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
