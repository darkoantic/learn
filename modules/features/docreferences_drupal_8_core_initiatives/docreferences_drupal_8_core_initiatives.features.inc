<?php
/**
 * @file
 * docreferences_drupal_8_core_initiatives.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function docreferences_drupal_8_core_initiatives_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "docreferences" && $api == "default_docreferences") {
    return array("version" => "1");
  }
}
