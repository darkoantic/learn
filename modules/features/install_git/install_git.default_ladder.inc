<?php
/**
 * @file
 * install_git.default_ladder.inc
 */

/**
 * Implements hook_default_ladder().
 */
function install_git_default_ladder() {
  $export = array();

  $rung = new stdClass;
  $rung->disabled = FALSE; /* Edit this to true to make a default rung disabled initially */
  $rung->api_version = 1;
  $rung->ladder = 'drupal';
  $rung->name = 'install_git';
  $rung->title = 'Install Git';
  $rung->description = '';
  $rung->lesson = 'install_git';
  $rung->css_class = 'ladder-in-development';
  $rung->weight = 130;
  $export['install_git'] = $rung;

  return $export;
}
