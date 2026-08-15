#pragma once
// IWYU pragma private; include "Steamworks/MMKVPMarshaller.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__MMKVPMarshaller_def.hpp"
#include "Steamworks/zzzz__MatchMakingKeyValuePair_t_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Steamworks::MMKVPMarshaller._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::MMKVPMarshaller::*)(::ArrayW<::Steamworks::MatchMakingKeyValuePair_t>)>(&::Steamworks::MMKVPMarshaller::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x180552e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::MMKVPMarshaller*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::Steamworks::MatchMakingKeyValuePair_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::MMKVPMarshaller.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::MMKVPMarshaller::*)()>(&::Steamworks::MMKVPMarshaller::Finalize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180552df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::MMKVPMarshaller*>(),
                    {::i2c::class_of<::Steamworks::MMKVPMarshaller*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::MMKVPMarshaller.op_Implicit___System__IntPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::MMKVPMarshaller*)>(&::Steamworks::MMKVPMarshaller::op_Implicit___System__IntPtr)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180552f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::MMKVPMarshaller*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Steamworks::MMKVPMarshaller*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& Steamworks::MMKVPMarshaller::__cordl_internal_get_m_pNativeArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_pNativeArray;
}
constexpr ::System::IntPtr const& Steamworks::MMKVPMarshaller::__cordl_internal_get_m_pNativeArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_pNativeArray;
}
constexpr void Steamworks::MMKVPMarshaller::__cordl_internal_set_m_pNativeArray(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_pNativeArray = value;
}
constexpr ::System::IntPtr& Steamworks::MMKVPMarshaller::__cordl_internal_get_m_pArrayEntries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_pArrayEntries;
}
constexpr ::System::IntPtr const& Steamworks::MMKVPMarshaller::__cordl_internal_get_m_pArrayEntries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_pArrayEntries;
}
constexpr void Steamworks::MMKVPMarshaller::__cordl_internal_set_m_pArrayEntries(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_pArrayEntries = value;
}
inline void Steamworks::MMKVPMarshaller::_ctor(::ArrayW<::Steamworks::MatchMakingKeyValuePair_t>  filters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::MMKVPMarshaller*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::Steamworks::MatchMakingKeyValuePair_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, filters);
}
inline void Steamworks::MMKVPMarshaller::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::MMKVPMarshaller*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IntPtr Steamworks::MMKVPMarshaller::op_Implicit___System__IntPtr(::Steamworks::MMKVPMarshaller*  that)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::MMKVPMarshaller*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Steamworks::MMKVPMarshaller*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, that);
}
inline ::Steamworks::MMKVPMarshaller* Steamworks::MMKVPMarshaller::New_ctor(::ArrayW<::Steamworks::MatchMakingKeyValuePair_t>  filters)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::MMKVPMarshaller*>(filters));
}
// Ctor Parameters []
constexpr ::Steamworks::MMKVPMarshaller::MMKVPMarshaller()   {
}
