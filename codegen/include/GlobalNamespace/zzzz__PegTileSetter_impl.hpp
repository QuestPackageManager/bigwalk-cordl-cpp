#pragma once
// IWYU pragma private; include "GlobalNamespace/PegTileSetter.hpp"
#include "GlobalNamespace/zzzz__PegTileSet_impl.hpp"
#include "GlobalNamespace/zzzz__PropGroup_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PegTileSetter_def.hpp"
#include "GlobalNamespace/zzzz__PegTileDataSet_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PegTileSetter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PegTileSetter::*)()>(&::GlobalNamespace::PegTileSetter::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileSetter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PegTileDataSet>& GlobalNamespace::PegTileSetter::__cordl_internal_get_dataSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dataSet;
}
constexpr ::UnityW<::GlobalNamespace::PegTileDataSet> const& GlobalNamespace::PegTileSetter::__cordl_internal_get_dataSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dataSet;
}
constexpr void GlobalNamespace::PegTileSetter::__cordl_internal_set_dataSet(::UnityW<::GlobalNamespace::PegTileDataSet>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dataSet = value;
}
constexpr ::GlobalNamespace::PegTileSet& GlobalNamespace::PegTileSetter::__cordl_internal_get_tileSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tileSet;
}
constexpr ::GlobalNamespace::PegTileSet const& GlobalNamespace::PegTileSetter::__cordl_internal_get_tileSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tileSet;
}
constexpr void GlobalNamespace::PegTileSetter::__cordl_internal_set_tileSet(::GlobalNamespace::PegTileSet  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tileSet = value;
}
constexpr ::ArrayW<::GlobalNamespace::PropGroup>& GlobalNamespace::PegTileSetter::__cordl_internal_get_overrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrides;
}
constexpr ::ArrayW<::GlobalNamespace::PropGroup> const& GlobalNamespace::PegTileSetter::__cordl_internal_get_overrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrides;
}
constexpr void GlobalNamespace::PegTileSetter::__cordl_internal_set_overrides(::ArrayW<::GlobalNamespace::PropGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrides = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>*& GlobalNamespace::PegTileSetter::__cordl_internal_get_props()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___props;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>* const& GlobalNamespace::PegTileSetter::__cordl_internal_get_props() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___props;
}
constexpr void GlobalNamespace::PegTileSetter::__cordl_internal_set_props(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___props = value;
}
inline void GlobalNamespace::PegTileSetter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileSetter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PegTileSetter* GlobalNamespace::PegTileSetter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PegTileSetter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PegTileSetter::PegTileSetter()   {
}
