#pragma once
// IWYU pragma private; include "Dissonance/Integrations/MirrorIgnorance/MirrorConn.hpp"
#include "Dissonance/Integrations/MirrorIgnorance/zzzz__MirrorConn_def.hpp"
#include "Mirror/zzzz__NetworkConnection_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorConn._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Integrations::MirrorIgnorance::MirrorConn::*)(::Mirror::NetworkConnection*)>(&::Dissonance::Integrations::MirrorIgnorance::MirrorConn::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorConn>(),
                        {".ctor", {}, {::i2c::type_of<::Mirror::NetworkConnection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorConn.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::Integrations::MirrorIgnorance::MirrorConn::*)()>(&::Dissonance::Integrations::MirrorIgnorance::MirrorConn::GetHashCode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803cd8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorConn>(),
                    {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorConn>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorConn.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::Integrations::MirrorIgnorance::MirrorConn::*)()>(&::Dissonance::Integrations::MirrorIgnorance::MirrorConn::ToString)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803cd910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorConn>(),
                    {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorConn>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorConn.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Integrations::MirrorIgnorance::MirrorConn::*)(::System::Object*)>(&::Dissonance::Integrations::MirrorIgnorance::MirrorConn::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803cd840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorConn>(),
                    {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorConn>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorConn.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Integrations::MirrorIgnorance::MirrorConn::*)(::Dissonance::Integrations::MirrorIgnorance::MirrorConn)>(&::Dissonance::Integrations::MirrorIgnorance::MirrorConn::Equals)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803cd810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorConn>(),
                        {"Equals", {}, {::i2c::type_of<::Dissonance::Integrations::MirrorIgnorance::MirrorConn>()}}
                    )));
    return ___internal_method;
  }
};
inline void Dissonance::Integrations::MirrorIgnorance::MirrorConn::_ctor(::Mirror::NetworkConnection*  connection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorConn>(),
                        {".ctor", {}, {::i2c::type_of<::Mirror::NetworkConnection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, connection);
}
inline int32_t Dissonance::Integrations::MirrorIgnorance::MirrorConn::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorConn>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Dissonance::Integrations::MirrorIgnorance::MirrorConn::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorConn>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool Dissonance::Integrations::MirrorIgnorance::MirrorConn::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorConn>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool Dissonance::Integrations::MirrorIgnorance::MirrorConn::Equals(::Dissonance::Integrations::MirrorIgnorance::MirrorConn  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorConn>(),
                        {"Equals", {}, {::i2c::type_of<::Dissonance::Integrations::MirrorIgnorance::MirrorConn>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::Dissonance::Integrations::MirrorIgnorance::MirrorConn>"
constexpr  Dissonance::Integrations::MirrorIgnorance::MirrorConn::operator ::System::IEquatable_1<::Dissonance::Integrations::MirrorIgnorance::MirrorConn>*()  {
return static_cast<::System::IEquatable_1<::Dissonance::Integrations::MirrorIgnorance::MirrorConn>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Dissonance::Integrations::MirrorIgnorance::MirrorConn>"
constexpr ::System::IEquatable_1<::Dissonance::Integrations::MirrorIgnorance::MirrorConn>* Dissonance::Integrations::MirrorIgnorance::MirrorConn::i___System__IEquatable_1___Dissonance__Integrations__MirrorIgnorance__MirrorConn_()  {
return static_cast<::System::IEquatable_1<::Dissonance::Integrations::MirrorIgnorance::MirrorConn>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Connection", ty: "::Mirror::NetworkConnection*", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Integrations::MirrorIgnorance::MirrorConn::MirrorConn(::Mirror::NetworkConnection*  Connection) noexcept  {
this->Connection = Connection;
}
// Ctor Parameters []
constexpr ::Dissonance::Integrations::MirrorIgnorance::MirrorConn::MirrorConn()   {
}
