<?php
/**
 * @file
 * Admin pages.
 */

/**
 * Administration settings for fields_tweak_button.
 */
function fields_tweak_button_admin_settings_form() {
  $form['fields_tweak_button_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Field machine name'),
    '#default_value' => variable_get('fields_tweak_button_name', '');
    '#description' => t('The name of the form item whose value is to be changed.'),
  );
  $form['fields_tweak_button_value'] = array(
    '#type' => 'textfield',
    '#title' => t('Field new value'),
    '#default_value' => variable_get('fields_tweak_button_value', '');
    '#description' => t('The name of the form item whose value is to be changed.'),
  );
  $form['fields_tweak_button_entity_enable'] = array(
    '#type' => 'checkbox',
    '#title' => t("Check within Entity Registration forms"),
    '#default_value' => variable_get('fields_tweak_button_entity_enable', FALSE),
    '#description' => t("Include search within entity registration forms, not just node formd."),
  );
  return system_settings_form($form);
}
