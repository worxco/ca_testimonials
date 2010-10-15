<?php

/**
 * Implementation of hook_content_default_fields().
 */
function ca_testimonials_content_default_fields() {
  $fields = array();

  // Exported field: field_ca_testimonial_link
  $fields['ca_testimonial-field_ca_testimonial_link'] = array(
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
    'validate_url' => '',
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
  // Included for use with string extractors like potx.
  t('Client Link');

  return $fields;
}
