#pragma once
// IWYU pragma private; include "GlobalNamespace/BackNavigationHelper.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BackNavigationHelper_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BackNavigationHelper.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BackNavigationHelper::*)()>(&::GlobalNamespace::BackNavigationHelper::Update)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x18041d2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BackNavigationHelper*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BackNavigationHelper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BackNavigationHelper::*)()>(&::GlobalNamespace::BackNavigationHelper::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BackNavigationHelper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::BackNavigationHelper::__cordl_internal_get_unselectedBack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unselectedBack;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::BackNavigationHelper::__cordl_internal_get_unselectedBack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unselectedBack;
}
constexpr void GlobalNamespace::BackNavigationHelper::__cordl_internal_set_unselectedBack(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unselectedBack = value;
}
inline void GlobalNamespace::BackNavigationHelper::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BackNavigationHelper*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BackNavigationHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BackNavigationHelper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BackNavigationHelper* GlobalNamespace::BackNavigationHelper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BackNavigationHelper*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BackNavigationHelper::BackNavigationHelper()   {
}
