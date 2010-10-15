<?php

/**
 * Implementation of hook_strongarm().
 */
function ca_testimonials_strongarm() {
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
    0 => 'status',
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
