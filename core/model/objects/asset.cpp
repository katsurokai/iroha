/*
Copyright Soramitsu Co., Ltd. 2016 All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/
#include <iostream>
#include <cstdint>
#include <unordered_map>
#include "asset.hpp"

namespace object {

Asset::Asset(
    std::string     domain,
    std::string     name,
    AssetValueT     value
):
    domain(std::move(domain)),
    name(std::move(name)),
    value(std::move(value))
{}


Asset::Asset(
  const Asset* a
):
  domain(a->domain),
  name(a->name),
  value(a->value)
{}

Asset::Asset(
    std::string     name,
    AssetValueT     value
):
    domain(""),
    name(std::move(name)),
    value(std::move(value))
{}

};  // namespace asset
