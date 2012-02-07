<?php
/**
 * @file
 * maintain_core_component.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function maintain_core_component_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ladder" && $api == "default_ladder") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "lessons" && $api == "default_lessons") {
    return array("version" => "1");
  }
}
