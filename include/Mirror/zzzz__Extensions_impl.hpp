#pragma once
// IWYU pragma private; include "Mirror/Extensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/zzzz__Extensions_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
//  Writing Method size for method: ::Mirror::Extensions.ToHexString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::ArraySegment_1<uint8_t>)>(&::Mirror::Extensions::ToHexString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181590ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Extensions*>(),
                        {"ToHexString", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Extensions.GetStableHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::Mirror::Extensions::GetStableHashCode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181590c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Extensions*>(),
                        {"GetStableHashCode", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Extensions.GetMethodName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Delegate*)>(&::Mirror::Extensions::GetMethodName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181590c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Extensions*>(),
                        {"GetMethodName", {}, {::i2c::type_of<::System::Delegate*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Mirror::Extensions::ToHexString(::System::ArraySegment_1<uint8_t>  segment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Extensions*>(),
                        {"ToHexString", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, segment);
}
inline int32_t Mirror::Extensions::GetStableHashCode(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Extensions*>(),
                        {"GetStableHashCode", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, text);
}
inline ::StringW Mirror::Extensions::GetMethodName(::System::Delegate*  func)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Extensions*>(),
                        {"GetMethodName", {}, {::i2c::type_of<::System::Delegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, func);
}
template<typename T>
inline void Mirror::Extensions::CopyTo(::System::Collections::Generic::IEnumerable_1<T>*  source, ::System::Collections::Generic::List_1<T>*  destination)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Mirror::Extensions*>(),
                    {"CopyTo", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, destination);
}
template<typename T>
inline bool Mirror::Extensions::TryDequeue(::System::Collections::Generic::Queue_1<T>*  source, ::by_ref<T>  element)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Mirror::Extensions*>(),
                    {"TryDequeue", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::Queue_1<T>*>(), ::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, element);
}
// Ctor Parameters []
constexpr ::Mirror::Extensions::Extensions()   {
}
