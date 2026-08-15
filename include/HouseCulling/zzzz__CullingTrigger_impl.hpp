#pragma once
// IWYU pragma private; include "HouseCulling/CullingTrigger.hpp"
#include "HouseCulling/zzzz__CullingRegion_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HouseCulling/zzzz__CullingTrigger_def.hpp"
#include "HouseCulling/zzzz__CullingRegion_def.hpp"
//  Writing Method size for method: ::HouseCulling::CullingTrigger.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseCulling::CullingTrigger::*)()>(&::HouseCulling::CullingTrigger::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingTrigger*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseCulling::CullingTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseCulling::CullingTrigger::*)()>(&::HouseCulling::CullingTrigger::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HouseCulling::CullingRegion>& HouseCulling::CullingTrigger::__cordl_internal_get_region()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___region;
}
constexpr ::UnityW<::HouseCulling::CullingRegion> const& HouseCulling::CullingTrigger::__cordl_internal_get_region() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___region;
}
constexpr void HouseCulling::CullingTrigger::__cordl_internal_set_region(::UnityW<::HouseCulling::CullingRegion>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___region = value;
}
constexpr ::ArrayW<::UnityW<::HouseCulling::CullingRegion>>& HouseCulling::CullingTrigger::__cordl_internal_get_regions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___regions;
}
constexpr ::ArrayW<::UnityW<::HouseCulling::CullingRegion>> const& HouseCulling::CullingTrigger::__cordl_internal_get_regions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___regions;
}
constexpr void HouseCulling::CullingTrigger::__cordl_internal_set_regions(::ArrayW<::UnityW<::HouseCulling::CullingRegion>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___regions = value;
}
constexpr int32_t& HouseCulling::CullingTrigger::__cordl_internal_get_priority()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___priority;
}
constexpr int32_t const& HouseCulling::CullingTrigger::__cordl_internal_get_priority() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___priority;
}
constexpr void HouseCulling::CullingTrigger::__cordl_internal_set_priority(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___priority = value;
}
inline void HouseCulling::CullingTrigger::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingTrigger*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HouseCulling::CullingTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HouseCulling::CullingTrigger* HouseCulling::CullingTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HouseCulling::CullingTrigger*>());
}
// Ctor Parameters []
constexpr ::HouseCulling::CullingTrigger::CullingTrigger()   {
}
