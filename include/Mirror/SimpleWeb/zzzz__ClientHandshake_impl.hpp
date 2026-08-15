#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/ClientHandshake.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/SimpleWeb/zzzz__ClientHandshake_def.hpp"
#include "Mirror/SimpleWeb/zzzz__Connection_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::Mirror::SimpleWeb::ClientHandshake.TryHandshake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::SimpleWeb::ClientHandshake::*)(::Mirror::SimpleWeb::Connection*, ::System::Uri*)>(&::Mirror::SimpleWeb::ClientHandshake::TryHandshake)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x181acfc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ClientHandshake*>(),
                        {"TryHandshake", {}, {::i2c::type_of<::Mirror::SimpleWeb::Connection*>(), ::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::ClientHandshake._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::ClientHandshake::*)()>(&::Mirror::SimpleWeb::ClientHandshake::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ClientHandshake*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Mirror::SimpleWeb::ClientHandshake::TryHandshake(::Mirror::SimpleWeb::Connection*  conn, ::System::Uri*  uri)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ClientHandshake*>(),
                        {"TryHandshake", {}, {::i2c::type_of<::Mirror::SimpleWeb::Connection*>(), ::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, conn, uri);
}
inline void Mirror::SimpleWeb::ClientHandshake::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ClientHandshake*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::SimpleWeb::ClientHandshake* Mirror::SimpleWeb::ClientHandshake::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::SimpleWeb::ClientHandshake*>());
}
// Ctor Parameters []
constexpr ::Mirror::SimpleWeb::ClientHandshake::ClientHandshake()   {
}
