#pragma once
// IWYU pragma private; include "Dissonance/IVoiceReceiptTrigger.hpp"
#include "Dissonance/zzzz__IVoiceReceiptTrigger_def.hpp"
//  Writing Method size for method: ::Dissonance::IVoiceReceiptTrigger.get_RoomName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::IVoiceReceiptTrigger::*)()>(&::Dissonance::IVoiceReceiptTrigger::get_RoomName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::IVoiceReceiptTrigger*>(),
                    {::i2c::class_of<::Dissonance::IVoiceReceiptTrigger*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::IVoiceReceiptTrigger.set_RoomName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::IVoiceReceiptTrigger::*)(::StringW)>(&::Dissonance::IVoiceReceiptTrigger::set_RoomName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::IVoiceReceiptTrigger*>(),
                    {::i2c::class_of<::Dissonance::IVoiceReceiptTrigger*>(), 1}
                ));
    return ___internal_method;
  }
};
inline ::StringW Dissonance::IVoiceReceiptTrigger::get_RoomName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::IVoiceReceiptTrigger*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Dissonance::IVoiceReceiptTrigger::set_RoomName(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::IVoiceReceiptTrigger*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
