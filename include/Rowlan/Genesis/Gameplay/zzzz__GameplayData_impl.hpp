#pragma once
// IWYU pragma private; include "Rowlan/Genesis/Gameplay/GameplayData.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Rowlan/Genesis/Gameplay/zzzz__GameplayData_def.hpp"
#include "Rowlan/Genesis/Gameplay/zzzz__GameplayData_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rowlan::Genesis::Gameplay::GameplayData_Module::GameplayData_Module(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::Gameplay::GameplayData_Module::GameplayData_Module()   {
}
constexpr ::Rowlan::Genesis::Gameplay::GameplayData_Module  Rowlan::Genesis::Gameplay::GameplayData_Module::Player{static_cast<int32_t>(0x0)};
constexpr ::Rowlan::Genesis::Gameplay::GameplayData_Module  Rowlan::Genesis::Gameplay::GameplayData_Module::GameManager{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::Rowlan::Genesis::Gameplay::GameplayData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::Gameplay::GameplayData::*)()>(&::Rowlan::Genesis::Gameplay::GameplayData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Gameplay::GameplayData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Rowlan::Genesis::Gameplay::GameplayData::__cordl_internal_get_helpBoxVisible()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___helpBoxVisible;
}
constexpr bool const& Rowlan::Genesis::Gameplay::GameplayData::__cordl_internal_get_helpBoxVisible() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___helpBoxVisible;
}
constexpr void Rowlan::Genesis::Gameplay::GameplayData::__cordl_internal_set_helpBoxVisible(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___helpBoxVisible = value;
}
constexpr ::Rowlan::Genesis::Gameplay::GameplayData_Module& Rowlan::Genesis::Gameplay::GameplayData::__cordl_internal_get__cordl_module()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_module;
}
constexpr ::Rowlan::Genesis::Gameplay::GameplayData_Module const& Rowlan::Genesis::Gameplay::GameplayData::__cordl_internal_get__cordl_module() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_module;
}
constexpr void Rowlan::Genesis::Gameplay::GameplayData::__cordl_internal_set__cordl_module(::Rowlan::Genesis::Gameplay::GameplayData_Module  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cordl_module = value;
}
inline void Rowlan::Genesis::Gameplay::GameplayData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Gameplay::GameplayData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rowlan::Genesis::Gameplay::GameplayData* Rowlan::Genesis::Gameplay::GameplayData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rowlan::Genesis::Gameplay::GameplayData*>());
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::Gameplay::GameplayData::GameplayData()   {
}
