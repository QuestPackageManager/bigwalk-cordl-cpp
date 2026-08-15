#pragma once
// IWYU pragma private; include "Dissonance/Integrations/MirrorIgnorance/DissonanceNetworkMessage.hpp"
#include "System/zzzz__ArraySegment_1_impl.hpp"
#include "Dissonance/Integrations/MirrorIgnorance/zzzz__DissonanceNetworkMessage_def.hpp"
#include "Mirror/zzzz__NetworkMessage_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage::*)(::System::ArraySegment_1<uint8_t>)>(&::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1803bfb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage>(),
                        {".ctor", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage::*)()>(&::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage::Dispose)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1803bfaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage::_ctor(::System::ArraySegment_1<uint8_t>  packet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage>(),
                        {".ctor", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, packet);
}
inline void Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr  Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage::operator ::Mirror::NetworkMessage*()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage::i___Mirror__NetworkMessage()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Data", ty: "::System::ArraySegment_1<uint8_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage::DissonanceNetworkMessage(::System::ArraySegment_1<uint8_t>  Data) noexcept  {
this->Data = Data;
}
// Ctor Parameters []
constexpr ::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage::DissonanceNetworkMessage()   {
}
