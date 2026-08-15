#pragma once
// IWYU pragma private; include "GlobalNamespace/MenuScreenSubmit.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MenuScreenSubmit_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MenuScreenSubmit.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuScreenSubmit::*)()>(&::GlobalNamespace::MenuScreenSubmit::Update)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x180425310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuScreenSubmit*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuScreenSubmit._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuScreenSubmit::*)()>(&::GlobalNamespace::MenuScreenSubmit::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuScreenSubmit*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::MenuScreenSubmit::__cordl_internal_get_submitAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___submitAction;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::MenuScreenSubmit::__cordl_internal_get_submitAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___submitAction;
}
constexpr void GlobalNamespace::MenuScreenSubmit::__cordl_internal_set_submitAction(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___submitAction = value;
}
constexpr bool& GlobalNamespace::MenuScreenSubmit::__cordl_internal_get_unselectedOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unselectedOnly;
}
constexpr bool const& GlobalNamespace::MenuScreenSubmit::__cordl_internal_get_unselectedOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unselectedOnly;
}
constexpr void GlobalNamespace::MenuScreenSubmit::__cordl_internal_set_unselectedOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unselectedOnly = value;
}
constexpr bool& GlobalNamespace::MenuScreenSubmit::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::MenuScreenSubmit::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::MenuScreenSubmit::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
inline void GlobalNamespace::MenuScreenSubmit::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuScreenSubmit*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuScreenSubmit::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuScreenSubmit*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuScreenSubmit* GlobalNamespace::MenuScreenSubmit::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuScreenSubmit*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuScreenSubmit::MenuScreenSubmit()   {
}
