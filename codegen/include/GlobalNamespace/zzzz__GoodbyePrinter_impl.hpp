#pragma once
// IWYU pragma private; include "GlobalNamespace/GoodbyePrinter.hpp"
#include "GlobalNamespace/zzzz__PeckSwitch_impl.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GoodbyePrinter_def.hpp"
#include "GlobalNamespace/zzzz__GoodbyePrinter_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckSwitch_def.hpp"
#include "GlobalNamespace/zzzz__PropHome_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
// Ctor Parameters [CppParam { name: "peckSwitches", ty: "::ArrayW<::UnityW<::GlobalNamespace::PeckSwitch>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "prop", ty: "::UnityW<::GlobalNamespace::Prop>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::GoodbyePrinter_PrinterOutcome::GoodbyePrinter_PrinterOutcome(::ArrayW<::UnityW<::GlobalNamespace::PeckSwitch>>  peckSwitches, ::UnityW<::GlobalNamespace::Prop>  prop) noexcept  {
this->peckSwitches = peckSwitches;
this->prop = prop;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GoodbyePrinter_PrinterOutcome::GoodbyePrinter_PrinterOutcome()   {
}
//  Writing Method size for method: ::GlobalNamespace::GoodbyePrinter.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GoodbyePrinter::*)()>(&::GlobalNamespace::GoodbyePrinter::Awake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803fe210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GoodbyePrinter*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GoodbyePrinter.OnQueuePeck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GoodbyePrinter::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::GoodbyePrinter::OnQueuePeck)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1803fe260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GoodbyePrinter*>(),
                        {"OnQueuePeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GoodbyePrinter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GoodbyePrinter::*)()>(&::GlobalNamespace::GoodbyePrinter::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GoodbyePrinter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PropHome>& GlobalNamespace::GoodbyePrinter::__cordl_internal_get_printerHome()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___printerHome;
}
constexpr ::UnityW<::GlobalNamespace::PropHome> const& GlobalNamespace::GoodbyePrinter::__cordl_internal_get_printerHome() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___printerHome;
}
constexpr void GlobalNamespace::GoodbyePrinter::__cordl_internal_set_printerHome(::UnityW<::GlobalNamespace::PropHome>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___printerHome = value;
}
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::GoodbyePrinter::__cordl_internal_get_queueSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queueSystem;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::GoodbyePrinter::__cordl_internal_get_queueSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queueSystem;
}
constexpr void GlobalNamespace::GoodbyePrinter::__cordl_internal_set_queueSystem(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___queueSystem = value;
}
constexpr ::ArrayW<::GlobalNamespace::GoodbyePrinter_PrinterOutcome>& GlobalNamespace::GoodbyePrinter::__cordl_internal_get_outcomes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outcomes;
}
constexpr ::ArrayW<::GlobalNamespace::GoodbyePrinter_PrinterOutcome> const& GlobalNamespace::GoodbyePrinter::__cordl_internal_get_outcomes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outcomes;
}
constexpr void GlobalNamespace::GoodbyePrinter::__cordl_internal_set_outcomes(::ArrayW<::GlobalNamespace::GoodbyePrinter_PrinterOutcome>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outcomes = value;
}
inline void GlobalNamespace::GoodbyePrinter::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GoodbyePrinter*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GoodbyePrinter::OnQueuePeck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GoodbyePrinter*>(),
                        {"OnQueuePeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::GoodbyePrinter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GoodbyePrinter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GoodbyePrinter* GlobalNamespace::GoodbyePrinter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GoodbyePrinter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GoodbyePrinter::GoodbyePrinter()   {
}
