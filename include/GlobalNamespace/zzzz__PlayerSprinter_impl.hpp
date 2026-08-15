#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerSprinter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerSprinter_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSprinter_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlayerSprinter_RunMode::PlayerSprinter_RunMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSprinter_RunMode::PlayerSprinter_RunMode()   {
}
constexpr ::GlobalNamespace::PlayerSprinter_RunMode  GlobalNamespace::PlayerSprinter_RunMode::Hold{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PlayerSprinter_RunMode  GlobalNamespace::PlayerSprinter_RunMode::Toggle{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::PlayerSprinter_RunMode  GlobalNamespace::PlayerSprinter_RunMode::PreserveWithToggle{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::PlayerSprinter_RunMode  GlobalNamespace::PlayerSprinter_RunMode::PreserveNoToggle{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::GlobalNamespace::PlayerSprinter.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSprinter::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerSprinter::Initialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSprinter*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSprinter.LocalUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSprinter::*)()>(&::GlobalNamespace::PlayerSprinter::LocalUpdate)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x180376220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSprinter*>(),
                        {"LocalUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSprinter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSprinter::*)()>(&::GlobalNamespace::PlayerSprinter::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSprinter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PlayerSprinter_RunMode& GlobalNamespace::PlayerSprinter::__cordl_internal_get_runMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___runMode;
}
constexpr ::GlobalNamespace::PlayerSprinter_RunMode const& GlobalNamespace::PlayerSprinter::__cordl_internal_get_runMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___runMode;
}
constexpr void GlobalNamespace::PlayerSprinter::__cordl_internal_set_runMode(::GlobalNamespace::PlayerSprinter_RunMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___runMode = value;
}
constexpr bool& GlobalNamespace::PlayerSprinter::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PlayerSprinter::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PlayerSprinter::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::PlayerSprinter::__cordl_internal_get_pc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pc;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::PlayerSprinter::__cordl_internal_get_pc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pc;
}
constexpr void GlobalNamespace::PlayerSprinter::__cordl_internal_set_pc(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pc = value;
}
constexpr bool& GlobalNamespace::PlayerSprinter::__cordl_internal_get_isSprinting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSprinting;
}
constexpr bool const& GlobalNamespace::PlayerSprinter::__cordl_internal_get_isSprinting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSprinting;
}
constexpr void GlobalNamespace::PlayerSprinter::__cordl_internal_set_isSprinting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isSprinting = value;
}
constexpr bool& GlobalNamespace::PlayerSprinter::__cordl_internal_get_sprintIsToggledOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sprintIsToggledOn;
}
constexpr bool const& GlobalNamespace::PlayerSprinter::__cordl_internal_get_sprintIsToggledOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sprintIsToggledOn;
}
constexpr void GlobalNamespace::PlayerSprinter::__cordl_internal_set_sprintIsToggledOn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sprintIsToggledOn = value;
}
inline void GlobalNamespace::PlayerSprinter::Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSprinter*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline void GlobalNamespace::PlayerSprinter::LocalUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSprinter*>(),
                        {"LocalUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSprinter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSprinter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerSprinter* GlobalNamespace::PlayerSprinter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerSprinter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSprinter::PlayerSprinter()   {
}
