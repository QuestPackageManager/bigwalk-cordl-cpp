#pragma once
// IWYU pragma private; include "GlobalNamespace/ScribeSavableData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ScribeSavableData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__ScribeSavableData_def.hpp"
#include "GlobalNamespace/zzzz__Scribe_def.hpp"
#include "Mirror/zzzz__CommandMessage_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ScribeSavableData_SavableCommandMessage.ToCommandMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::CommandMessage (::GlobalNamespace::ScribeSavableData_SavableCommandMessage::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::ScribeSavableData_SavableCommandMessage::ToCommandMessage)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803eef60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScribeSavableData_SavableCommandMessage>(),
                        {"ToCommandMessage", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScribeSavableData_SavableCommandMessage._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScribeSavableData_SavableCommandMessage::*)(::Mirror::CommandMessage)>(&::GlobalNamespace::ScribeSavableData_SavableCommandMessage::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1803ef010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScribeSavableData_SavableCommandMessage>(),
                        {".ctor", {}, {::i2c::type_of<::Mirror::CommandMessage>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Mirror::CommandMessage GlobalNamespace::ScribeSavableData_SavableCommandMessage::ToCommandMessage(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScribeSavableData_SavableCommandMessage>(),
                        {"ToCommandMessage", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::CommandMessage>(*this, ___internal_method, playerCharacter);
}
inline void GlobalNamespace::ScribeSavableData_SavableCommandMessage::_ctor(::Mirror::CommandMessage  commandMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScribeSavableData_SavableCommandMessage>(),
                        {".ctor", {}, {::i2c::type_of<::Mirror::CommandMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, commandMessage);
}
// Ctor Parameters [CppParam { name: "componentIndex", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "functionHash", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "payload", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ScribeSavableData_SavableCommandMessage::ScribeSavableData_SavableCommandMessage(uint8_t  componentIndex, uint16_t  functionHash, ::ArrayW<uint8_t>  payload) noexcept  {
this->componentIndex = componentIndex;
this->functionHash = functionHash;
this->payload = payload;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScribeSavableData_SavableCommandMessage::ScribeSavableData_SavableCommandMessage()   {
}
//  Writing Method size for method: ::GlobalNamespace::ScribeSavableData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScribeSavableData::*)()>(&::GlobalNamespace::ScribeSavableData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScribeSavableData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::Scribe_Scrible>*& GlobalNamespace::ScribeSavableData::__cordl_internal_get_scribles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scribles;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::Scribe_Scrible>* const& GlobalNamespace::ScribeSavableData::__cordl_internal_get_scribles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scribles;
}
constexpr void GlobalNamespace::ScribeSavableData::__cordl_internal_set_scribles(::System::Collections::Generic::List_1<::GlobalNamespace::Scribe_Scrible>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scribles = value;
}
inline void GlobalNamespace::ScribeSavableData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScribeSavableData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ScribeSavableData* GlobalNamespace::ScribeSavableData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ScribeSavableData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScribeSavableData::ScribeSavableData()   {
}
