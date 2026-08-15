#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/LogEventParamPairParamValueInternal.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__QuatInternal_impl.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__Vec3fInternal_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__LogEventParamPairParamValueInternal_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__LogEventParamPairParamValue_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal::*)(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>)>(&::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal::Set)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x180524d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal::Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180524d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal::__cordl_internal_get_m_ClientHandle()  {
return this->___m_ClientHandle;
}
constexpr ::System::IntPtr const& Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal::__cordl_internal_get_m_ClientHandle() const {
return this->___m_ClientHandle;
}
constexpr void Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal::__cordl_internal_set_m_ClientHandle(::System::IntPtr  value)  {
this->___m_ClientHandle = value;
}
constexpr ::System::IntPtr& Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal::__cordl_internal_get_m_String()  {
return this->___m_String;
}
constexpr ::System::IntPtr const& Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal::__cordl_internal_get_m_String() const {
return this->___m_String;
}
constexpr void Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal::__cordl_internal_set_m_String(::System::IntPtr  value)  {
this->___m_String = value;
}
constexpr uint32_t& Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal::__cordl_internal_get_m_UInt32()  {
return this->___m_UInt32;
}
constexpr uint32_t const& Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal::__cordl_internal_get_m_UInt32() const {
return this->___m_UInt32;
}
constexpr void Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal::__cordl_internal_set_m_UInt32(uint32_t  value)  {
this->___m_UInt32 = value;
}
constexpr int32_t& Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal::__cordl_internal_get_m_Int32()  {
return this->___m_Int32;
}
constexpr int32_t const& Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal::__cordl_internal_get_m_Int32() const {
return this->___m_Int32;
}
constexpr void Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal::__cordl_internal_set_m_Int32(int32_t  value)  {
this->___m_Int32 = value;
}
constexpr uint64_t& Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal::__cordl_internal_get_m_UInt64()  {
return this->___m_UInt64;
}
constexpr uint64_t const& Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal::__cordl_internal_get_m_UInt64() const {
return this->___m_UInt64;
}
constexpr void Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal::__cordl_internal_set_m_UInt64(uint64_t  value)  {
this->___m_UInt64 = value;
}
constexpr int64_t& Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal::__cordl_internal_get_m_Int64()  {
return this->___m_Int64;
}
constexpr int64_t const& Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal::__cordl_internal_get_m_Int64() const {
return this->___m_Int64;
}
constexpr void Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal::__cordl_internal_set_m_Int64(int64_t  value)  {
this->___m_Int64 = value;
}
constexpr ::Epic::OnlineServices::AntiCheatCommon::Vec3fInternal& Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal::__cordl_internal_get_m_Vec3f()  {
return this->___m_Vec3f;
}
constexpr ::Epic::OnlineServices::AntiCheatCommon::Vec3fInternal const& Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal::__cordl_internal_get_m_Vec3f() const {
return this->___m_Vec3f;
}
constexpr void Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal::__cordl_internal_set_m_Vec3f(::Epic::OnlineServices::AntiCheatCommon::Vec3fInternal  value)  {
this->___m_Vec3f = value;
}
constexpr ::Epic::OnlineServices::AntiCheatCommon::QuatInternal& Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal::__cordl_internal_get_m_Quat()  {
return this->___m_Quat;
}
constexpr ::Epic::OnlineServices::AntiCheatCommon::QuatInternal const& Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal::__cordl_internal_get_m_Quat() const {
return this->___m_Quat;
}
constexpr void Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal::__cordl_internal_set_m_Quat(::Epic::OnlineServices::AntiCheatCommon::QuatInternal  value)  {
this->___m_Quat = value;
}
constexpr float_t& Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal::__cordl_internal_get_m_Float()  {
return this->___m_Float;
}
constexpr float_t const& Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal::__cordl_internal_get_m_Float() const {
return this->___m_Float;
}
constexpr void Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal::__cordl_internal_set_m_Float(float_t  value)  {
this->___m_Float = value;
}
inline void Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal::Set(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>"
constexpr  Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>* Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__AntiCheatCommon__LogEventParamPairParamValue_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ClientHandle", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_String", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UInt32", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Int32", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UInt64", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Int64", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Vec3f", ty: "::Epic::OnlineServices::AntiCheatCommon::Vec3fInternal", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Quat", ty: "::Epic::OnlineServices::AntiCheatCommon::QuatInternal", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Float", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal::LogEventParamPairParamValueInternal(::System::IntPtr  m_ClientHandle, ::System::IntPtr  m_String, uint32_t  m_UInt32, int32_t  m_Int32, uint64_t  m_UInt64, int64_t  m_Int64, ::Epic::OnlineServices::AntiCheatCommon::Vec3fInternal  m_Vec3f, ::Epic::OnlineServices::AntiCheatCommon::QuatInternal  m_Quat, float_t  m_Float) noexcept  {
this->m_ClientHandle = m_ClientHandle;
this->m_String = m_String;
this->m_UInt32 = m_UInt32;
this->m_Int32 = m_Int32;
this->m_UInt64 = m_UInt64;
this->m_Int64 = m_Int64;
this->m_Vec3f = m_Vec3f;
this->m_Quat = m_Quat;
this->m_Float = m_Float;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal::LogEventParamPairParamValueInternal()   {
}
