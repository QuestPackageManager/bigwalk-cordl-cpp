#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/ReadHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/SimpleWeb/zzzz__ReadHelper_def.hpp"
#include "Mirror/SimpleWeb/zzzz__ReadHelper_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Mirror::SimpleWeb::ReadHelper___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::ReadHelper___c::*)()>(&::Mirror::SimpleWeb::ReadHelper___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ReadHelper___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::ReadHelper___c._Read_b__0_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::SimpleWeb::ReadHelper___c::*)(::System::Exception*)>(&::Mirror::SimpleWeb::ReadHelper___c::_Read_b__0_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ReadHelper___c*>(),
                        {"<Read>b__0_0", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::SimpleWeb::ReadHelper___c::setStaticF___9(::Mirror::SimpleWeb::ReadHelper___c*  value)  {
::cordl_internals::setStaticField<::Mirror::SimpleWeb::ReadHelper___c*, "<>9", ::Mirror::SimpleWeb::ReadHelper___c*>(std::forward<::Mirror::SimpleWeb::ReadHelper___c*>(value));
}
inline ::Mirror::SimpleWeb::ReadHelper___c* Mirror::SimpleWeb::ReadHelper___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Mirror::SimpleWeb::ReadHelper___c*, "<>9", ::Mirror::SimpleWeb::ReadHelper___c*>();
}
inline void Mirror::SimpleWeb::ReadHelper___c::setStaticF___9__0_0(::System::Func_2<::System::Exception*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Exception*,bool>*, "<>9__0_0", ::Mirror::SimpleWeb::ReadHelper___c*>(std::forward<::System::Func_2<::System::Exception*,bool>*>(value));
}
inline ::System::Func_2<::System::Exception*,bool>* Mirror::SimpleWeb::ReadHelper___c::getStaticF___9__0_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Exception*,bool>*, "<>9__0_0", ::Mirror::SimpleWeb::ReadHelper___c*>();
}
inline void Mirror::SimpleWeb::ReadHelper___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ReadHelper___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mirror::SimpleWeb::ReadHelper___c::_Read_b__0_0(::System::Exception*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ReadHelper___c*>(),
                        {"<Read>b__0_0", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, e);
}
inline ::Mirror::SimpleWeb::ReadHelper___c* Mirror::SimpleWeb::ReadHelper___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::SimpleWeb::ReadHelper___c*>());
}
// Ctor Parameters []
constexpr ::Mirror::SimpleWeb::ReadHelper___c::ReadHelper___c()   {
}
//  Writing Method size for method: ::Mirror::SimpleWeb::ReadHelper.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IO::Stream*, ::ArrayW<uint8_t>, int32_t, int32_t)>(&::Mirror::SimpleWeb::ReadHelper::Read)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x181ad1de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ReadHelper*>(),
                        {"Read", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::ReadHelper.TryRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IO::Stream*, ::ArrayW<uint8_t>, int32_t, int32_t)>(&::Mirror::SimpleWeb::ReadHelper::TryRead)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181ad2110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ReadHelper*>(),
                        {"TryRead", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::ReadHelper.SafeReadTillMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int32_t> (*)(::System::IO::Stream*, ::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>)>(&::Mirror::SimpleWeb::ReadHelper::SafeReadTillMatch)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181ad1ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ReadHelper*>(),
                        {"SafeReadTillMatch", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Mirror::SimpleWeb::ReadHelper::Read(::System::IO::Stream*  stream, ::ArrayW<uint8_t>  outBuffer, int32_t  outOffset, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ReadHelper*>(),
                        {"Read", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, stream, outBuffer, outOffset, length);
}
inline bool Mirror::SimpleWeb::ReadHelper::TryRead(::System::IO::Stream*  stream, ::ArrayW<uint8_t>  outBuffer, int32_t  outOffset, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ReadHelper*>(),
                        {"TryRead", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, stream, outBuffer, outOffset, length);
}
inline ::System::Nullable_1<int32_t> Mirror::SimpleWeb::ReadHelper::SafeReadTillMatch(::System::IO::Stream*  stream, ::ArrayW<uint8_t>  outBuffer, int32_t  outOffset, int32_t  maxLength, ::ArrayW<uint8_t>  endOfHeader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ReadHelper*>(),
                        {"SafeReadTillMatch", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>>(nullptr, ___internal_method, stream, outBuffer, outOffset, maxLength, endOfHeader);
}
// Ctor Parameters []
constexpr ::Mirror::SimpleWeb::ReadHelper::ReadHelper()   {
}
