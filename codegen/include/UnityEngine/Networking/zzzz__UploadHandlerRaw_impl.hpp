#pragma once
// IWYU pragma private; include "UnityEngine/Networking/UploadHandlerRaw.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Networking/zzzz__UploadHandler_impl.hpp"
#include "UnityEngine/Networking/zzzz__UploadHandlerRaw_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::Networking::UploadHandlerRaw.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::Networking::UploadHandlerRaw*, uint8_t*, int32_t)>(&::UnityEngine::Networking::UploadHandlerRaw::Create)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18254b630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UploadHandlerRaw*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::Networking::UploadHandlerRaw*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UploadHandlerRaw._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UploadHandlerRaw::*)(::ArrayW<uint8_t>)>(&::UnityEngine::Networking::UploadHandlerRaw::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18254b680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UploadHandlerRaw*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UploadHandlerRaw._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UploadHandlerRaw::*)(::Unity::Collections::NativeArray_1<uint8_t>, bool)>(&::UnityEngine::Networking::UploadHandlerRaw::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18254b700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UploadHandlerRaw*>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UploadHandlerRaw.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UploadHandlerRaw::*)()>(&::UnityEngine::Networking::UploadHandlerRaw::Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18254b640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Networking::UploadHandlerRaw*>(),
                    {::i2c::class_of<::UnityEngine::Networking::UploadHandlerRaw*>(), 5}
                ));
    return ___internal_method;
  }
};
constexpr ::Unity::Collections::NativeArray_1<uint8_t>& UnityEngine::Networking::UploadHandlerRaw::__cordl_internal_get_m_Payload()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Payload;
}
constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& UnityEngine::Networking::UploadHandlerRaw::__cordl_internal_get_m_Payload() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Payload;
}
constexpr void UnityEngine::Networking::UploadHandlerRaw::__cordl_internal_set_m_Payload(::Unity::Collections::NativeArray_1<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Payload = value;
}
inline ::System::IntPtr UnityEngine::Networking::UploadHandlerRaw::Create(::UnityEngine::Networking::UploadHandlerRaw*  self, uint8_t*  data, int32_t  dataLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UploadHandlerRaw*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::Networking::UploadHandlerRaw*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, self, data, dataLength);
}
inline void UnityEngine::Networking::UploadHandlerRaw::_ctor(::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UploadHandlerRaw*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void UnityEngine::Networking::UploadHandlerRaw::_ctor(::Unity::Collections::NativeArray_1<uint8_t>  data, bool  transferOwnership)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::UploadHandlerRaw*>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, transferOwnership);
}
inline void UnityEngine::Networking::UploadHandlerRaw::Dispose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Networking::UploadHandlerRaw*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Networking::UploadHandlerRaw* UnityEngine::Networking::UploadHandlerRaw::New_ctor(::ArrayW<uint8_t>  data)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Networking::UploadHandlerRaw*>(data));
}
inline ::UnityEngine::Networking::UploadHandlerRaw* UnityEngine::Networking::UploadHandlerRaw::New_ctor(::Unity::Collections::NativeArray_1<uint8_t>  data, bool  transferOwnership)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Networking::UploadHandlerRaw*>(data, transferOwnership));
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::UploadHandlerRaw::UploadHandlerRaw()   {
}
