#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkedSeed.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkedSeed_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetworkedSeed.OnStartServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkedSeed::*)()>(&::GlobalNamespace::NetworkedSeed::OnStartServer)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180426ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkedSeed*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkedSeed*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkedSeed._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkedSeed::*)()>(&::GlobalNamespace::NetworkedSeed::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180360450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedSeed*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkedSeed.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkedSeed::*)()>(&::GlobalNamespace::NetworkedSeed::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedSeed*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkedSeed.get_Networkseed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NetworkedSeed::*)()>(&::GlobalNamespace::NetworkedSeed::get_Networkseed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d5ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedSeed*>(),
                        {"get_Networkseed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkedSeed.set_Networkseed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkedSeed::*)(::ByRefConst<int32_t>)>(&::GlobalNamespace::NetworkedSeed::set_Networkseed)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180426f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedSeed*>(),
                        {"set_Networkseed", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkedSeed.SerializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkedSeed::*)(::Mirror::NetworkWriter*, bool)>(&::GlobalNamespace::NetworkedSeed::SerializeSyncVars)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180414ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkedSeed*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkedSeed*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkedSeed.DeserializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkedSeed::*)(::Mirror::NetworkReader*, bool)>(&::GlobalNamespace::NetworkedSeed::DeserializeSyncVars)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180426e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkedSeed*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkedSeed*>(), 8}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::NetworkedSeed::__cordl_internal_get_seed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seed;
}
constexpr int32_t const& GlobalNamespace::NetworkedSeed::__cordl_internal_get_seed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seed;
}
constexpr void GlobalNamespace::NetworkedSeed::__cordl_internal_set_seed(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seed = value;
}
inline void GlobalNamespace::NetworkedSeed::OnStartServer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkedSeed*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkedSeed::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedSeed*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkedSeed::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedSeed*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::NetworkedSeed::get_Networkseed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedSeed*>(),
                        {"get_Networkseed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkedSeed::set_Networkseed(::ByRefConst<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedSeed*>(),
                        {"set_Networkseed", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::NetworkedSeed::SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkedSeed*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, forceAll);
}
inline void GlobalNamespace::NetworkedSeed::DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkedSeed*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, initialState);
}
inline ::GlobalNamespace::NetworkedSeed* GlobalNamespace::NetworkedSeed::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetworkedSeed*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkedSeed::NetworkedSeed()   {
}
