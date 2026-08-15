#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/SocketId.hpp"
#include "Epic/OnlineServices/P2P/zzzz__SocketId_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SocketId.get_SocketName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Epic::OnlineServices::P2P::SocketId::*)()>(&::Epic::OnlineServices::P2P::SocketId::get_SocketName)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180534260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SocketId>(),
                        {"get_SocketName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SocketId.set_SocketName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::SocketId::*)(::StringW)>(&::Epic::OnlineServices::P2P::SocketId::set_SocketName)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x1805342b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SocketId>(),
                        {"set_SocketName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SocketId.PrepareForUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::P2P::SocketId::*)()>(&::Epic::OnlineServices::P2P::SocketId::PrepareForUpdate)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180534130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SocketId>(),
                        {"PrepareForUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SocketId.CheckIfChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::SocketId::*)(bool)>(&::Epic::OnlineServices::P2P::SocketId::CheckIfChanged)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180533fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SocketId>(),
                        {"CheckIfChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SocketId.RebuildStringFromBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::SocketId::*)()>(&::Epic::OnlineServices::P2P::SocketId::RebuildStringFromBuffer)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805341a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SocketId>(),
                        {"RebuildStringFromBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SocketId.EnsureStorage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::SocketId::*)()>(&::Epic::OnlineServices::P2P::SocketId::EnsureStorage)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180534090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SocketId>(),
                        {"EnsureStorage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SocketId.CopyIdToSwapBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::SocketId::*)()>(&::Epic::OnlineServices::P2P::SocketId::CopyIdToSwapBuffer)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180534040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SocketId>(),
                        {"CopyIdToSwapBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::P2P::SocketId::setStaticF_Empty(::Epic::OnlineServices::P2P::SocketId  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::P2P::SocketId, "Empty", ::Epic::OnlineServices::P2P::SocketId>(std::forward<::Epic::OnlineServices::P2P::SocketId>(value));
}
inline ::Epic::OnlineServices::P2P::SocketId Epic::OnlineServices::P2P::SocketId::getStaticF_Empty()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::P2P::SocketId, "Empty", ::Epic::OnlineServices::P2P::SocketId>();
}
inline ::StringW Epic::OnlineServices::P2P::SocketId::get_SocketName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SocketId>(),
                        {"get_SocketName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Epic::OnlineServices::P2P::SocketId::set_SocketName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SocketId>(),
                        {"set_SocketName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Epic::OnlineServices::P2P::SocketId::PrepareForUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SocketId>(),
                        {"PrepareForUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Epic::OnlineServices::P2P::SocketId::CheckIfChanged(bool  wasCacheValid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SocketId>(),
                        {"CheckIfChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, wasCacheValid);
}
inline void Epic::OnlineServices::P2P::SocketId::RebuildStringFromBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SocketId>(),
                        {"RebuildStringFromBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Epic::OnlineServices::P2P::SocketId::EnsureStorage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SocketId>(),
                        {"EnsureStorage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Epic::OnlineServices::P2P::SocketId::CopyIdToSwapBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SocketId>(),
                        {"CopyIdToSwapBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_CacheValid", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CachedSocketName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AllBytes", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SwapBuffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::P2P::SocketId::SocketId(bool  m_CacheValid, ::StringW  m_CachedSocketName, ::ArrayW<uint8_t>  m_AllBytes, ::ArrayW<uint8_t>  m_SwapBuffer) noexcept  {
this->m_CacheValid = m_CacheValid;
this->m_CachedSocketName = m_CachedSocketName;
this->m_AllBytes = m_AllBytes;
this->m_SwapBuffer = m_SwapBuffer;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::P2P::SocketId::SocketId()   {
}
