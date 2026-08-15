#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/AddNotifyIncomingPacketQueueFullOptionsInternal.hpp"
#include "Epic/OnlineServices/P2P/zzzz__AddNotifyIncomingPacketQueueFullOptionsInternal_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__AddNotifyIncomingPacketQueueFullOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::P2P::AddNotifyIncomingPacketQueueFullOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::AddNotifyIncomingPacketQueueFullOptionsInternal::*)(::by_ref<::Epic::OnlineServices::P2P::AddNotifyIncomingPacketQueueFullOptions>)>(&::Epic::OnlineServices::P2P::AddNotifyIncomingPacketQueueFullOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804bdbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::AddNotifyIncomingPacketQueueFullOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::AddNotifyIncomingPacketQueueFullOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::AddNotifyIncomingPacketQueueFullOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::AddNotifyIncomingPacketQueueFullOptionsInternal::*)()>(&::Epic::OnlineServices::P2P::AddNotifyIncomingPacketQueueFullOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::AddNotifyIncomingPacketQueueFullOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::P2P::AddNotifyIncomingPacketQueueFullOptionsInternal::Set(::by_ref<::Epic::OnlineServices::P2P::AddNotifyIncomingPacketQueueFullOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::AddNotifyIncomingPacketQueueFullOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::AddNotifyIncomingPacketQueueFullOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::P2P::AddNotifyIncomingPacketQueueFullOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::AddNotifyIncomingPacketQueueFullOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::AddNotifyIncomingPacketQueueFullOptions>"
constexpr  Epic::OnlineServices::P2P::AddNotifyIncomingPacketQueueFullOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::AddNotifyIncomingPacketQueueFullOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::AddNotifyIncomingPacketQueueFullOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::AddNotifyIncomingPacketQueueFullOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::AddNotifyIncomingPacketQueueFullOptions>* Epic::OnlineServices::P2P::AddNotifyIncomingPacketQueueFullOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__P2P__AddNotifyIncomingPacketQueueFullOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::AddNotifyIncomingPacketQueueFullOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::P2P::AddNotifyIncomingPacketQueueFullOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::P2P::AddNotifyIncomingPacketQueueFullOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::P2P::AddNotifyIncomingPacketQueueFullOptionsInternal::AddNotifyIncomingPacketQueueFullOptionsInternal(int32_t  m_ApiVersion) noexcept  {
this->m_ApiVersion = m_ApiVersion;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::P2P::AddNotifyIncomingPacketQueueFullOptionsInternal::AddNotifyIncomingPacketQueueFullOptionsInternal()   {
}
