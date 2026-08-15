#pragma once
// IWYU pragma private; include "GlobalNamespace/MedalPlatforming.hpp"
#include "GlobalNamespace/zzzz__PeckStateFilter_impl.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "HouseHouse/Medal/zzzz__MedalType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MedalPlatforming_def.hpp"
#include "GlobalNamespace/zzzz__StickyPlatform_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MedalPlatforming.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MedalPlatforming::*)()>(&::GlobalNamespace::MedalPlatforming::OnEnable)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x180424ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MedalPlatforming*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MedalPlatforming.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MedalPlatforming::*)()>(&::GlobalNamespace::MedalPlatforming::OnDisable)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x180424b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MedalPlatforming*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MedalPlatforming.OnEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MedalPlatforming::*)()>(&::GlobalNamespace::MedalPlatforming::OnEnter)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180424e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MedalPlatforming*>(),
                        {"OnEnter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MedalPlatforming._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MedalPlatforming::*)()>(&::GlobalNamespace::MedalPlatforming::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MedalPlatforming*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::StickyPlatform>>*& GlobalNamespace::MedalPlatforming::__cordl_internal_get_stickyPlatforms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stickyPlatforms;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::StickyPlatform>>* const& GlobalNamespace::MedalPlatforming::__cordl_internal_get_stickyPlatforms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stickyPlatforms;
}
constexpr void GlobalNamespace::MedalPlatforming::__cordl_internal_set_stickyPlatforms(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::StickyPlatform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stickyPlatforms = value;
}
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::MedalPlatforming::__cordl_internal_get_peckSystemReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckSystemReference;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::MedalPlatforming::__cordl_internal_get_peckSystemReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckSystemReference;
}
constexpr void GlobalNamespace::MedalPlatforming::__cordl_internal_set_peckSystemReference(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peckSystemReference = value;
}
constexpr ::GlobalNamespace::PeckStateFilter& GlobalNamespace::MedalPlatforming::__cordl_internal_get_peckStateFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckStateFilter;
}
constexpr ::GlobalNamespace::PeckStateFilter const& GlobalNamespace::MedalPlatforming::__cordl_internal_get_peckStateFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckStateFilter;
}
constexpr void GlobalNamespace::MedalPlatforming::__cordl_internal_set_peckStateFilter(::GlobalNamespace::PeckStateFilter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peckStateFilter = value;
}
constexpr ::HouseHouse::Medal::MedalType& GlobalNamespace::MedalPlatforming::__cordl_internal_get_medalType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___medalType;
}
constexpr ::HouseHouse::Medal::MedalType const& GlobalNamespace::MedalPlatforming::__cordl_internal_get_medalType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___medalType;
}
constexpr void GlobalNamespace::MedalPlatforming::__cordl_internal_set_medalType(::HouseHouse::Medal::MedalType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___medalType = value;
}
inline void GlobalNamespace::MedalPlatforming::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MedalPlatforming*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MedalPlatforming::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MedalPlatforming*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MedalPlatforming::OnEnter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MedalPlatforming*>(),
                        {"OnEnter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MedalPlatforming::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MedalPlatforming*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MedalPlatforming* GlobalNamespace::MedalPlatforming::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MedalPlatforming*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MedalPlatforming::MedalPlatforming()   {
}
