#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/SocketIdInternal.hpp"
#include "Epic/OnlineServices/P2P/zzzz__SocketIdInternal_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__SocketId_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SocketIdInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::SocketIdInternal::*)(::by_ref<::Epic::OnlineServices::P2P::SocketId>)>(&::Epic::OnlineServices::P2P::SocketIdInternal::Get)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180533ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SocketIdInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::SocketId>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SocketIdInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::SocketIdInternal::*)(::by_ref<::Epic::OnlineServices::P2P::SocketId>)>(&::Epic::OnlineServices::P2P::SocketIdInternal::Set)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x180533c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SocketIdInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::SocketId>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SocketIdInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::SocketIdInternal::*)()>(&::Epic::OnlineServices::P2P::SocketIdInternal::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SocketIdInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::P2P::SocketIdInternal::Get(::by_ref<::Epic::OnlineServices::P2P::SocketId>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SocketIdInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::SocketId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::P2P::SocketIdInternal::Set(::by_ref<::Epic::OnlineServices::P2P::SocketId>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SocketIdInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::SocketId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::P2P::SocketIdInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SocketIdInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::SocketId>"
constexpr  Epic::OnlineServices::P2P::SocketIdInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::SocketId>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::SocketId>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::SocketId>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::SocketId>* Epic::OnlineServices::P2P::SocketIdInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__P2P__SocketId_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::SocketId>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::SocketId>"
constexpr  Epic::OnlineServices::P2P::SocketIdInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::SocketId>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::SocketId>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::SocketId>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::SocketId>* Epic::OnlineServices::P2P::SocketIdInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__P2P__SocketId_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::SocketId>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::P2P::SocketIdInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::P2P::SocketIdInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SocketName", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::P2P::SocketIdInternal::SocketIdInternal(int32_t  m_ApiVersion, ::ArrayW<uint8_t>  m_SocketName) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_SocketName = m_SocketName;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::P2P::SocketIdInternal::SocketIdInternal()   {
}
