#pragma once
// IWYU pragma private; include "GlobalNamespace/ContinueNavigationHelper.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ContinueNavigationHelper_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ContinueNavigationHelper.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ContinueNavigationHelper::*)()>(&::GlobalNamespace::ContinueNavigationHelper::Update)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x18041e660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ContinueNavigationHelper*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ContinueNavigationHelper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ContinueNavigationHelper::*)()>(&::GlobalNamespace::ContinueNavigationHelper::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ContinueNavigationHelper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::ContinueNavigationHelper::__cordl_internal_get_unselectedContinue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unselectedContinue;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::ContinueNavigationHelper::__cordl_internal_get_unselectedContinue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unselectedContinue;
}
constexpr void GlobalNamespace::ContinueNavigationHelper::__cordl_internal_set_unselectedContinue(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unselectedContinue = value;
}
inline void GlobalNamespace::ContinueNavigationHelper::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ContinueNavigationHelper*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ContinueNavigationHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ContinueNavigationHelper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ContinueNavigationHelper* GlobalNamespace::ContinueNavigationHelper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ContinueNavigationHelper*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ContinueNavigationHelper::ContinueNavigationHelper()   {
}
