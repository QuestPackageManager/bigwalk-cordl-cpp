#pragma once
// IWYU pragma private; include "System/IO/Path.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/zzzz__Path_def.hpp"
#include "System/Buffers/zzzz__SpanAction_2_def.hpp"
#include "System/IO/zzzz__Path_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/zzzz__ValueTuple_1_def.hpp"
#include "System/zzzz__ValueTuple_5_def.hpp"
#include "System/zzzz__ValueTuple_8_def.hpp"
//  Writing Method size for method: ::System::IO::Path___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Path___c::*)()>(&::System::IO::Path___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path___c._JoinInternal_b__59_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Path___c::*)(::System::Span_1<char16_t>, ::System::ValueTuple_5<::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool>)>(&::System::IO::Path___c::_JoinInternal_b__59_0)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1816f4610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path___c*>(),
                        {"<JoinInternal>b__59_0", {}, {::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::System::ValueTuple_5<::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path___c._JoinInternal_b__60_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Path___c::*)(::System::Span_1<char16_t>, ::System::ValueTuple_8<::System::IntPtr,int32_t,::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool,::System::ValueTuple_1<bool>>)>(&::System::IO::Path___c::_JoinInternal_b__60_0)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1816f4730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path___c*>(),
                        {"<JoinInternal>b__60_0", {}, {::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::System::ValueTuple_8<::System::IntPtr,int32_t,::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool,::System::ValueTuple_1<bool>>>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::IO::Path___c::setStaticF___9(::System::IO::Path___c*  value)  {
::cordl_internals::setStaticField<::System::IO::Path___c*, "<>9", ::System::IO::Path___c*>(std::forward<::System::IO::Path___c*>(value));
}
inline ::System::IO::Path___c* System::IO::Path___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::System::IO::Path___c*, "<>9", ::System::IO::Path___c*>();
}
inline void System::IO::Path___c::setStaticF___9__59_0(::System::Buffers::SpanAction_2<char16_t,::System::ValueTuple_5<::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool>>*  value)  {
::cordl_internals::setStaticField<::System::Buffers::SpanAction_2<char16_t,::System::ValueTuple_5<::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool>>*, "<>9__59_0", ::System::IO::Path___c*>(std::forward<::System::Buffers::SpanAction_2<char16_t,::System::ValueTuple_5<::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool>>*>(value));
}
inline ::System::Buffers::SpanAction_2<char16_t,::System::ValueTuple_5<::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool>>* System::IO::Path___c::getStaticF___9__59_0()  {
return ::cordl_internals::getStaticField<::System::Buffers::SpanAction_2<char16_t,::System::ValueTuple_5<::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool>>*, "<>9__59_0", ::System::IO::Path___c*>();
}
inline void System::IO::Path___c::setStaticF___9__60_0(::System::Buffers::SpanAction_2<char16_t,::System::ValueTuple_8<::System::IntPtr,int32_t,::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool,::System::ValueTuple_1<bool>>>*  value)  {
::cordl_internals::setStaticField<::System::Buffers::SpanAction_2<char16_t,::System::ValueTuple_8<::System::IntPtr,int32_t,::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool,::System::ValueTuple_1<bool>>>*, "<>9__60_0", ::System::IO::Path___c*>(std::forward<::System::Buffers::SpanAction_2<char16_t,::System::ValueTuple_8<::System::IntPtr,int32_t,::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool,::System::ValueTuple_1<bool>>>*>(value));
}
inline ::System::Buffers::SpanAction_2<char16_t,::System::ValueTuple_8<::System::IntPtr,int32_t,::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool,::System::ValueTuple_1<bool>>>* System::IO::Path___c::getStaticF___9__60_0()  {
return ::cordl_internals::getStaticField<::System::Buffers::SpanAction_2<char16_t,::System::ValueTuple_8<::System::IntPtr,int32_t,::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool,::System::ValueTuple_1<bool>>>*, "<>9__60_0", ::System::IO::Path___c*>();
}
inline void System::IO::Path___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::Path___c::_JoinInternal_b__59_0(::System::Span_1<char16_t>  destination, ::System::ValueTuple_5<::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool>  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path___c*>(),
                        {"<JoinInternal>b__59_0", {}, {::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::System::ValueTuple_5<::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination, state);
}
inline void System::IO::Path___c::_JoinInternal_b__60_0(::System::Span_1<char16_t>  destination, ::System::ValueTuple_8<::System::IntPtr,int32_t,::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool,::System::ValueTuple_1<bool>>  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path___c*>(),
                        {"<JoinInternal>b__60_0", {}, {::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::System::ValueTuple_8<::System::IntPtr,int32_t,::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool,::System::ValueTuple_1<bool>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination, state);
}
inline ::System::IO::Path___c* System::IO::Path___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::Path___c*>());
}
// Ctor Parameters []
constexpr ::System::IO::Path___c::Path___c()   {
}
//  Writing Method size for method: ::System::IO::Path.ChangeExtension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::System::IO::Path::ChangeExtension)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1816edfd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"ChangeExtension", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.Combine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::System::IO::Path::Combine)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1816ee440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"Combine", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.CleanPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Path::CleanPath)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x1816ee1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"CleanPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetDirectoryName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Path::GetDirectoryName)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1816ee900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetDirectoryName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetDirectoryName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<char16_t> (*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::Path::GetDirectoryName)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1816ee870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetDirectoryName", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetExtension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Path::GetExtension)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1816eeb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetExtension", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetFileName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Path::GetFileName)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1816eee70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetFileName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetFileNameWithoutExtension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Path::GetFileNameWithoutExtension)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1816eec10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetFileNameWithoutExtension", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetFullPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Path::GetFullPath)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1816eef10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetFullPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetFullPathInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Path::GetFullPathInternal)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1816eef10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetFullPathInternal", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetFullPathName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t, ::System::Text::StringBuilder*, ::by_ref<::System::IntPtr>)>(&::System::IO::Path::GetFullPathName)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1816ef120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetFullPathName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetFullPathName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Path::GetFullPathName)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1816eef40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetFullPathName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.WindowsDriveAdjustment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Path::WindowsDriveAdjustment)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x1816f08f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"WindowsDriveAdjustment", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.InsecureGetFullPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Path::InsecureGetFullPath)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x1816ef8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"InsecureGetFullPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.IsDirectorySeparator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::System::IO::Path::IsDirectorySeparator)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1816efd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"IsDirectorySeparator", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetPathRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Path::GetPathRoot)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x1816ef2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetPathRoot", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetTempPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::System::IO::Path::GetTempPath)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1816ef830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetTempPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.get_temp_path
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::System::IO::Path::get_temp_path)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816f0ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"get_temp_path", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.IsPathRooted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::Path::IsPathRooted)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1816efed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"IsPathRooted", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.IsPathRooted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::IO::Path::IsPathRooted)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1816efdc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"IsPathRooted", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetInvalidFileNameChars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<char16_t> (*)()>(&::System::IO::Path::GetInvalidFileNameChars)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1816ef200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetInvalidFileNameChars", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetInvalidPathChars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<char16_t> (*)()>(&::System::IO::Path::GetInvalidPathChars)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1816ef260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetInvalidPathChars", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.findExtension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::System::IO::Path::findExtension)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1816f0e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"findExtension", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetServerAndShare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Path::GetServerAndShare)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1816ef6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetServerAndShare", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.SameRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW)>(&::System::IO::Path::SameRoot)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x1816f0620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"SameRoot", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.CanonicalizePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Path::CanonicalizePath)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0x1816eda00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"CanonicalizePath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.Combine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<::StringW>)>(&::System::IO::Path::Combine)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1816ee690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"Combine", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.Combine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW, ::StringW)>(&::System::IO::Path::Combine)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1816ee5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"Combine", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetFileName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<char16_t> (*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::Path::GetFileName)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1816eed80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetFileName", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.Join
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::Path::Join)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1816f0340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"Join", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.Join
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::Path::Join)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1816f0530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"Join", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.JoinInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::Path::JoinInternal)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1816f01b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"JoinInternal", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.JoinInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::Path::JoinInternal)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1816eff60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"JoinInternal", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::IO::Path::setStaticF_InvalidPathChars(::ArrayW<char16_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "InvalidPathChars", ::System::IO::Path*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::IO::Path::getStaticF_InvalidPathChars()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "InvalidPathChars", ::System::IO::Path*>();
}
inline void System::IO::Path::setStaticF_AltDirectorySeparatorChar(char16_t  value)  {
::cordl_internals::setStaticField<char16_t, "AltDirectorySeparatorChar", ::System::IO::Path*>(std::forward<char16_t>(value));
}
inline char16_t System::IO::Path::getStaticF_AltDirectorySeparatorChar()  {
return ::cordl_internals::getStaticField<char16_t, "AltDirectorySeparatorChar", ::System::IO::Path*>();
}
inline void System::IO::Path::setStaticF_DirectorySeparatorChar(char16_t  value)  {
::cordl_internals::setStaticField<char16_t, "DirectorySeparatorChar", ::System::IO::Path*>(std::forward<char16_t>(value));
}
inline char16_t System::IO::Path::getStaticF_DirectorySeparatorChar()  {
return ::cordl_internals::getStaticField<char16_t, "DirectorySeparatorChar", ::System::IO::Path*>();
}
inline void System::IO::Path::setStaticF_PathSeparator(char16_t  value)  {
::cordl_internals::setStaticField<char16_t, "PathSeparator", ::System::IO::Path*>(std::forward<char16_t>(value));
}
inline char16_t System::IO::Path::getStaticF_PathSeparator()  {
return ::cordl_internals::getStaticField<char16_t, "PathSeparator", ::System::IO::Path*>();
}
inline void System::IO::Path::setStaticF_DirectorySeparatorStr(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "DirectorySeparatorStr", ::System::IO::Path*>(std::forward<::StringW>(value));
}
inline ::StringW System::IO::Path::getStaticF_DirectorySeparatorStr()  {
return ::cordl_internals::getStaticField<::StringW, "DirectorySeparatorStr", ::System::IO::Path*>();
}
inline void System::IO::Path::setStaticF_VolumeSeparatorChar(char16_t  value)  {
::cordl_internals::setStaticField<char16_t, "VolumeSeparatorChar", ::System::IO::Path*>(std::forward<char16_t>(value));
}
inline char16_t System::IO::Path::getStaticF_VolumeSeparatorChar()  {
return ::cordl_internals::getStaticField<char16_t, "VolumeSeparatorChar", ::System::IO::Path*>();
}
inline void System::IO::Path::setStaticF_PathSeparatorChars(::ArrayW<char16_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "PathSeparatorChars", ::System::IO::Path*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::IO::Path::getStaticF_PathSeparatorChars()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "PathSeparatorChars", ::System::IO::Path*>();
}
inline void System::IO::Path::setStaticF_dirEqualsVolume(bool  value)  {
::cordl_internals::setStaticField<bool, "dirEqualsVolume", ::System::IO::Path*>(std::forward<bool>(value));
}
inline bool System::IO::Path::getStaticF_dirEqualsVolume()  {
return ::cordl_internals::getStaticField<bool, "dirEqualsVolume", ::System::IO::Path*>();
}
inline void System::IO::Path::setStaticF_trimEndCharsWindows(::ArrayW<char16_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "trimEndCharsWindows", ::System::IO::Path*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::IO::Path::getStaticF_trimEndCharsWindows()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "trimEndCharsWindows", ::System::IO::Path*>();
}
inline void System::IO::Path::setStaticF_trimEndCharsUnix(::ArrayW<char16_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "trimEndCharsUnix", ::System::IO::Path*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::IO::Path::getStaticF_trimEndCharsUnix()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "trimEndCharsUnix", ::System::IO::Path*>();
}
inline ::StringW System::IO::Path::ChangeExtension(::StringW  path, ::StringW  extension)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"ChangeExtension", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path, extension);
}
inline ::StringW System::IO::Path::Combine(::StringW  path1, ::StringW  path2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"Combine", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path1, path2);
}
inline ::StringW System::IO::Path::CleanPath(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"CleanPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, s);
}
inline ::StringW System::IO::Path::GetDirectoryName(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetDirectoryName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline ::System::ReadOnlySpan_1<char16_t> System::IO::Path::GetDirectoryName(::System::ReadOnlySpan_1<char16_t>  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetDirectoryName", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Path::GetExtension(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetExtension", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Path::GetFileName(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetFileName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Path::GetFileNameWithoutExtension(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetFileNameWithoutExtension", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Path::GetFullPath(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetFullPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Path::GetFullPathInternal(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetFullPathInternal", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline int32_t System::IO::Path::GetFullPathName(::StringW  path, int32_t  numBufferChars, ::System::Text::StringBuilder*  buffer, ::by_ref<::System::IntPtr>  lpFilePartOrNull)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetFullPathName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, path, numBufferChars, buffer, lpFilePartOrNull);
}
inline ::StringW System::IO::Path::GetFullPathName(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetFullPathName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Path::WindowsDriveAdjustment(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"WindowsDriveAdjustment", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Path::InsecureGetFullPath(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"InsecureGetFullPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline bool System::IO::Path::IsDirectorySeparator(char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"IsDirectorySeparator", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c);
}
inline ::StringW System::IO::Path::GetPathRoot(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetPathRoot", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Path::GetTempPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetTempPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW System::IO::Path::get_temp_path()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"get_temp_path", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline bool System::IO::Path::IsPathRooted(::System::ReadOnlySpan_1<char16_t>  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"IsPathRooted", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline bool System::IO::Path::IsPathRooted(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"IsPathRooted", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline ::ArrayW<char16_t> System::IO::Path::GetInvalidFileNameChars()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetInvalidFileNameChars", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>>(nullptr, ___internal_method);
}
inline ::ArrayW<char16_t> System::IO::Path::GetInvalidPathChars()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetInvalidPathChars", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>>(nullptr, ___internal_method);
}
inline int32_t System::IO::Path::findExtension(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"findExtension", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Path::GetServerAndShare(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetServerAndShare", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline bool System::IO::Path::SameRoot(::StringW  root, ::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"SameRoot", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, root, path);
}
inline ::StringW System::IO::Path::CanonicalizePath(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"CanonicalizePath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Path::Combine(::ArrayW<::StringW>  paths)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"Combine", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, paths);
}
inline ::StringW System::IO::Path::Combine(::StringW  path1, ::StringW  path2, ::StringW  path3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"Combine", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path1, path2, path3);
}
inline ::System::ReadOnlySpan_1<char16_t> System::IO::Path::GetFileName(::System::ReadOnlySpan_1<char16_t>  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetFileName", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Path::Join(::System::ReadOnlySpan_1<char16_t>  path1, ::System::ReadOnlySpan_1<char16_t>  path2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"Join", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path1, path2);
}
inline ::StringW System::IO::Path::Join(::System::ReadOnlySpan_1<char16_t>  path1, ::System::ReadOnlySpan_1<char16_t>  path2, ::System::ReadOnlySpan_1<char16_t>  path3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"Join", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path1, path2, path3);
}
inline ::StringW System::IO::Path::JoinInternal(::System::ReadOnlySpan_1<char16_t>  first, ::System::ReadOnlySpan_1<char16_t>  second)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"JoinInternal", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, first, second);
}
inline ::StringW System::IO::Path::JoinInternal(::System::ReadOnlySpan_1<char16_t>  first, ::System::ReadOnlySpan_1<char16_t>  second, ::System::ReadOnlySpan_1<char16_t>  third)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"JoinInternal", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, first, second, third);
}
// Ctor Parameters []
constexpr ::System::IO::Path::Path()   {
}
