#pragma once
// IWYU pragma private; include "Mirror/NetworkTeam.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "Mirror/zzzz__NetworkTeam_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
//  Writing Method size for method: ::Mirror::NetworkTeam._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTeam::*)()>(&::Mirror::NetworkTeam::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181526bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTeam*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTeam.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTeam::*)()>(&::Mirror::NetworkTeam::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTeam*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTeam.get_NetworkteamId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mirror::NetworkTeam::*)()>(&::Mirror::NetworkTeam::get_NetworkteamId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTeam*>(),
                        {"get_NetworkteamId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTeam.set_NetworkteamId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTeam::*)(::ByRefConst<::StringW>)>(&::Mirror::NetworkTeam::set_NetworkteamId)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181526c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTeam*>(),
                        {"set_NetworkteamId", {}, {::i2c::type_of<::ByRefConst<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTeam.get_NetworkforceShown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::NetworkTeam::*)()>(&::Mirror::NetworkTeam::get_NetworkforceShown)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180352b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTeam*>(),
                        {"get_NetworkforceShown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTeam.set_NetworkforceShown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTeam::*)(::ByRefConst<bool>)>(&::Mirror::NetworkTeam::set_NetworkforceShown)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181526bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTeam*>(),
                        {"set_NetworkforceShown", {}, {::i2c::type_of<::ByRefConst<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTeam.SerializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTeam::*)(::Mirror::NetworkWriter*, bool)>(&::Mirror::NetworkTeam::SerializeSyncVars)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181526b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkTeam*>(),
                    {::i2c::class_of<::Mirror::NetworkTeam*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTeam.DeserializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTeam::*)(::Mirror::NetworkReader*, bool)>(&::Mirror::NetworkTeam::DeserializeSyncVars)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181526a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkTeam*>(),
                    {::i2c::class_of<::Mirror::NetworkTeam*>(), 8}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& Mirror::NetworkTeam::__cordl_internal_get_teamId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teamId;
}
constexpr ::StringW const& Mirror::NetworkTeam::__cordl_internal_get_teamId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teamId;
}
constexpr void Mirror::NetworkTeam::__cordl_internal_set_teamId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teamId = value;
}
constexpr bool& Mirror::NetworkTeam::__cordl_internal_get_forceShown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceShown;
}
constexpr bool const& Mirror::NetworkTeam::__cordl_internal_get_forceShown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceShown;
}
constexpr void Mirror::NetworkTeam::__cordl_internal_set_forceShown(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forceShown = value;
}
inline void Mirror::NetworkTeam::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTeam*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkTeam::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTeam*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Mirror::NetworkTeam::get_NetworkteamId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTeam*>(),
                        {"get_NetworkteamId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Mirror::NetworkTeam::set_NetworkteamId(::ByRefConst<::StringW>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTeam*>(),
                        {"set_NetworkteamId", {}, {::i2c::type_of<::ByRefConst<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Mirror::NetworkTeam::get_NetworkforceShown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTeam*>(),
                        {"get_NetworkforceShown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mirror::NetworkTeam::set_NetworkforceShown(::ByRefConst<bool>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTeam*>(),
                        {"set_NetworkforceShown", {}, {::i2c::type_of<::ByRefConst<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::NetworkTeam::SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkTeam*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, forceAll);
}
inline void Mirror::NetworkTeam::DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkTeam*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, initialState);
}
inline ::Mirror::NetworkTeam* Mirror::NetworkTeam::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::NetworkTeam*>());
}
// Ctor Parameters []
constexpr ::Mirror::NetworkTeam::NetworkTeam()   {
}
