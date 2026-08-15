#pragma once
// IWYU pragma private; include "GlobalNamespace/PegTileSetCollection.hpp"
#include "GlobalNamespace/zzzz__PegTileSet_impl.hpp"
#include "GlobalNamespace/zzzz__PropGroup_impl.hpp"
#include "GlobalNamespace/zzzz__PegTileSetCollection_def.hpp"
#include "GlobalNamespace/zzzz__PropGroup_def.hpp"
// Ctor Parameters [CppParam { name: "pegTileSet", ty: "::GlobalNamespace::PegTileSet", modifiers: "", def_value: Some("{}") }, CppParam { name: "allowRepeats", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "propGroups", ty: "::ArrayW<::GlobalNamespace::PropGroup>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PegTileSetCollection::PegTileSetCollection(::GlobalNamespace::PegTileSet  pegTileSet, bool  allowRepeats, ::ArrayW<::GlobalNamespace::PropGroup>  propGroups) noexcept  {
this->pegTileSet = pegTileSet;
this->allowRepeats = allowRepeats;
this->propGroups = propGroups;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PegTileSetCollection::PegTileSetCollection()   {
}
