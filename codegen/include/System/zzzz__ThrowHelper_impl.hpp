#pragma once
// IWYU pragma private; include "System/ThrowHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ThrowHelper_def.hpp"
#include "System/Collections/Generic/zzzz__KeyNotFoundException_def.hpp"
#include "System/zzzz__ArgumentException_def.hpp"
#include "System/zzzz__ArgumentNullException_def.hpp"
#include "System/zzzz__ArgumentOutOfRangeException_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__ExceptionArgument_def.hpp"
#include "System/zzzz__ExceptionResource_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__InvalidOperationException_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ThrowHelper.ThrowArgumentNullException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ExceptionArgument)>(&::System::ThrowHelper::ThrowArgumentNullException)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1817274e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowArgumentNullException", {}, {::i2c::type_of<::System::ExceptionArgument>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.CreateArgumentNullException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::ExceptionArgument)>(&::System::ThrowHelper::CreateArgumentNullException)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181726c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"CreateArgumentNullException", {}, {::i2c::type_of<::System::ExceptionArgument>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.ThrowArrayTypeMismatchException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::ThrowHelper::ThrowArrayTypeMismatchException)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181727610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowArrayTypeMismatchException", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.CreateArrayTypeMismatchException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::ThrowHelper::CreateArrayTypeMismatchException)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18171e120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"CreateArrayTypeMismatchException", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.ThrowArgumentException_DestinationTooShort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::ThrowHelper::ThrowArgumentException_DestinationTooShort)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181727450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowArgumentException_DestinationTooShort", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.CreateArgumentException_DestinationTooShort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::ThrowHelper::CreateArgumentException_DestinationTooShort)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181726bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"CreateArgumentException_DestinationTooShort", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.ThrowIndexOutOfRangeException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::ThrowHelper::ThrowIndexOutOfRangeException)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181727690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowIndexOutOfRangeException", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.CreateIndexOutOfRangeException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::ThrowHelper::CreateIndexOutOfRangeException)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181726d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"CreateIndexOutOfRangeException", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.ThrowArgumentOutOfRangeException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::ThrowHelper::ThrowArgumentOutOfRangeException)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1817275a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowArgumentOutOfRangeException", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.CreateArgumentOutOfRangeException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::ThrowHelper::CreateArgumentOutOfRangeException)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181726c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"CreateArgumentOutOfRangeException", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.ThrowArgumentOutOfRangeException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ExceptionArgument)>(&::System::ThrowHelper::ThrowArgumentOutOfRangeException)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181727580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowArgumentOutOfRangeException", {}, {::i2c::type_of<::System::ExceptionArgument>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.CreateArgumentOutOfRangeException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::ExceptionArgument)>(&::System::ThrowHelper::CreateArgumentOutOfRangeException)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181726cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"CreateArgumentOutOfRangeException", {}, {::i2c::type_of<::System::ExceptionArgument>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.ThrowNotSupportedException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::ThrowHelper::ThrowNotSupportedException)> {
  constexpr static std::size_t size = 0x44a0;
  constexpr static std::size_t addrs = 0x180994860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowNotSupportedException", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.CreateThrowNotSupportedException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::ThrowHelper::CreateThrowNotSupportedException)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181726d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"CreateThrowNotSupportedException", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.ThrowWrongKeyTypeArgumentException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::Type*)>(&::System::ThrowHelper::ThrowWrongKeyTypeArgumentException)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1817278a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowWrongKeyTypeArgumentException", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.ThrowWrongValueTypeArgumentException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::Type*)>(&::System::ThrowHelper::ThrowWrongValueTypeArgumentException)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181727920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowWrongValueTypeArgumentException", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.ThrowArgumentException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ExceptionResource)>(&::System::ThrowHelper::ThrowArgumentException)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1817274b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowArgumentException", {}, {::i2c::type_of<::System::ExceptionResource>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.ThrowArgumentException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ExceptionResource, ::System::ExceptionArgument)>(&::System::ThrowHelper::ThrowArgumentException)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181727470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowArgumentException", {}, {::i2c::type_of<::System::ExceptionResource>(), ::i2c::type_of<::System::ExceptionArgument>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.ThrowArgumentOutOfRangeException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ExceptionArgument, ::System::ExceptionResource)>(&::System::ThrowHelper::ThrowArgumentOutOfRangeException)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181727500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowArgumentOutOfRangeException", {}, {::i2c::type_of<::System::ExceptionArgument>(), ::i2c::type_of<::System::ExceptionResource>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.ThrowInvalidOperationException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ExceptionResource)>(&::System::ThrowHelper::ThrowInvalidOperationException)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181727780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowInvalidOperationException", {}, {::i2c::type_of<::System::ExceptionResource>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.ThrowSerializationException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ExceptionResource)>(&::System::ThrowHelper::ThrowSerializationException)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181727820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowSerializationException", {}, {::i2c::type_of<::System::ExceptionResource>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.ThrowNotSupportedException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ExceptionResource)>(&::System::ThrowHelper::ThrowNotSupportedException)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1817277f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowNotSupportedException", {}, {::i2c::type_of<::System::ExceptionResource>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::ThrowHelper::ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181727700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.ThrowInvalidOperationException_InvalidOperation_EnumOpCantHappen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::ThrowHelper::ThrowInvalidOperationException_InvalidOperation_EnumOpCantHappen)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181727740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowInvalidOperationException_InvalidOperation_EnumOpCantHappen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.ThrowInvalidOperationException_InvalidOperation_EnumNotStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::ThrowHelper::ThrowInvalidOperationException_InvalidOperation_EnumNotStarted)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181727720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowInvalidOperationException_InvalidOperation_EnumNotStarted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.ThrowInvalidOperationException_InvalidOperation_EnumEnded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::ThrowHelper::ThrowInvalidOperationException_InvalidOperation_EnumEnded)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1817276e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowInvalidOperationException_InvalidOperation_EnumEnded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.ThrowInvalidOperationException_InvalidOperation_NoValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::ThrowHelper::ThrowInvalidOperationException_InvalidOperation_NoValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181727760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowInvalidOperationException_InvalidOperation_NoValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.GetArgumentOutOfRangeException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ArgumentOutOfRangeException* (*)(::System::ExceptionArgument, ::StringW)>(&::System::ThrowHelper::GetArgumentOutOfRangeException)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181726fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"GetArgumentOutOfRangeException", {}, {::i2c::type_of<::System::ExceptionArgument>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.ThrowArgumentOutOfRange_IndexException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::ThrowHelper::ThrowArgumentOutOfRange_IndexException)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1817275c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowArgumentOutOfRange_IndexException", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.ThrowIndexArgumentOutOfRange_NeedNonNegNumException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::ThrowHelper::ThrowIndexArgumentOutOfRange_NeedNonNegNumException)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181727660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowIndexArgumentOutOfRange_NeedNonNegNumException", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.ThrowArgumentException_Argument_InvalidArrayType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::ThrowHelper::ThrowArgumentException_Argument_InvalidArrayType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181727430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowArgumentException_Argument_InvalidArrayType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.GetAddingDuplicateWithKeyArgumentException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ArgumentException* (*)(::System::Object*)>(&::System::ThrowHelper::GetAddingDuplicateWithKeyArgumentException)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181726d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"GetAddingDuplicateWithKeyArgumentException", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.ThrowAddingDuplicateWithKeyArgumentException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::ThrowHelper::ThrowAddingDuplicateWithKeyArgumentException)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181727410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowAddingDuplicateWithKeyArgumentException", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.GetKeyNotFoundException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::KeyNotFoundException* (*)(::System::Object*)>(&::System::ThrowHelper::GetKeyNotFoundException)> {
  constexpr static std::size_t size = 0xb0c0;
  constexpr static std::size_t addrs = 0x18116fec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"GetKeyNotFoundException", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.ThrowKeyNotFoundException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::ThrowHelper::ThrowKeyNotFoundException)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18116feb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowKeyNotFoundException", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.ThrowInvalidTypeWithPointersNotSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*)>(&::System::ThrowHelper::ThrowInvalidTypeWithPointersNotSupported)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1817277b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowInvalidTypeWithPointersNotSupported", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.ThrowInvalidOperationException_ConcurrentOperationsNotSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::ThrowHelper::ThrowInvalidOperationException_ConcurrentOperationsNotSupported)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1817276b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowInvalidOperationException_ConcurrentOperationsNotSupported", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.GetInvalidOperationException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::InvalidOperationException* (*)(::StringW)>(&::System::ThrowHelper::GetInvalidOperationException)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181727170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"GetInvalidOperationException", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.ThrowArraySegmentCtorValidationFailedExceptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Array*, int32_t, int32_t)>(&::System::ThrowHelper::ThrowArraySegmentCtorValidationFailedExceptions)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1817275f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowArraySegmentCtorValidationFailedExceptions", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.GetArraySegmentCtorValidationFailedException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Array*, int32_t, int32_t)>(&::System::ThrowHelper::GetArraySegmentCtorValidationFailedException)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181727090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"GetArraySegmentCtorValidationFailedException", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.GetArgumentException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ArgumentException* (*)(::System::ExceptionResource)>(&::System::ThrowHelper::GetArgumentException)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181726dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"GetArgumentException", {}, {::i2c::type_of<::System::ExceptionResource>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.GetArgumentNullException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ArgumentNullException* (*)(::System::ExceptionArgument)>(&::System::ThrowHelper::GetArgumentNullException)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181726f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"GetArgumentNullException", {}, {::i2c::type_of<::System::ExceptionArgument>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.GetArgumentName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::ExceptionArgument)>(&::System::ThrowHelper::GetArgumentName)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181726e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"GetArgumentName", {}, {::i2c::type_of<::System::ExceptionArgument>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.GetArgumentOutOfRangeException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ArgumentOutOfRangeException* (*)(::System::ExceptionArgument, ::System::ExceptionResource)>(&::System::ThrowHelper::GetArgumentOutOfRangeException)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181727010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"GetArgumentOutOfRangeException", {}, {::i2c::type_of<::System::ExceptionArgument>(), ::i2c::type_of<::System::ExceptionResource>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::ThrowHelper::ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181727870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::ThrowHelper::ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181727630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ThrowHelper.GetResourceName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::ExceptionResource)>(&::System::ThrowHelper::GetResourceName)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x1817271b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"GetResourceName", {}, {::i2c::type_of<::System::ExceptionResource>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::ThrowHelper::ThrowArgumentNullException(::System::ExceptionArgument  argument)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowArgumentNullException", {}, {::i2c::type_of<::System::ExceptionArgument>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, argument);
}
inline ::System::Exception* System::ThrowHelper::CreateArgumentNullException(::System::ExceptionArgument  argument)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"CreateArgumentNullException", {}, {::i2c::type_of<::System::ExceptionArgument>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, argument);
}
inline void System::ThrowHelper::ThrowArrayTypeMismatchException()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowArrayTypeMismatchException", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Exception* System::ThrowHelper::CreateArrayTypeMismatchException()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"CreateArrayTypeMismatchException", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline void System::ThrowHelper::ThrowArgumentException_DestinationTooShort()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowArgumentException_DestinationTooShort", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Exception* System::ThrowHelper::CreateArgumentException_DestinationTooShort()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"CreateArgumentException_DestinationTooShort", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline void System::ThrowHelper::ThrowIndexOutOfRangeException()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowIndexOutOfRangeException", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Exception* System::ThrowHelper::CreateIndexOutOfRangeException()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"CreateIndexOutOfRangeException", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline void System::ThrowHelper::ThrowArgumentOutOfRangeException()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowArgumentOutOfRangeException", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Exception* System::ThrowHelper::CreateArgumentOutOfRangeException()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"CreateArgumentOutOfRangeException", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline void System::ThrowHelper::ThrowArgumentOutOfRangeException(::System::ExceptionArgument  argument)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowArgumentOutOfRangeException", {}, {::i2c::type_of<::System::ExceptionArgument>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, argument);
}
inline ::System::Exception* System::ThrowHelper::CreateArgumentOutOfRangeException(::System::ExceptionArgument  argument)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"CreateArgumentOutOfRangeException", {}, {::i2c::type_of<::System::ExceptionArgument>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, argument);
}
inline void System::ThrowHelper::ThrowNotSupportedException()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowNotSupportedException", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Exception* System::ThrowHelper::CreateThrowNotSupportedException()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"CreateThrowNotSupportedException", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline void System::ThrowHelper::ThrowWrongKeyTypeArgumentException(::System::Object*  key, ::System::Type*  targetType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowWrongKeyTypeArgumentException", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, key, targetType);
}
inline void System::ThrowHelper::ThrowWrongValueTypeArgumentException(::System::Object*  value, ::System::Type*  targetType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowWrongValueTypeArgumentException", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, targetType);
}
inline void System::ThrowHelper::ThrowArgumentException(::System::ExceptionResource  resource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowArgumentException", {}, {::i2c::type_of<::System::ExceptionResource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, resource);
}
inline void System::ThrowHelper::ThrowArgumentException(::System::ExceptionResource  resource, ::System::ExceptionArgument  argument)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowArgumentException", {}, {::i2c::type_of<::System::ExceptionResource>(), ::i2c::type_of<::System::ExceptionArgument>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, resource, argument);
}
inline void System::ThrowHelper::ThrowArgumentOutOfRangeException(::System::ExceptionArgument  argument, ::System::ExceptionResource  resource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowArgumentOutOfRangeException", {}, {::i2c::type_of<::System::ExceptionArgument>(), ::i2c::type_of<::System::ExceptionResource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, argument, resource);
}
inline void System::ThrowHelper::ThrowInvalidOperationException(::System::ExceptionResource  resource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowInvalidOperationException", {}, {::i2c::type_of<::System::ExceptionResource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, resource);
}
inline void System::ThrowHelper::ThrowSerializationException(::System::ExceptionResource  resource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowSerializationException", {}, {::i2c::type_of<::System::ExceptionResource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, resource);
}
inline void System::ThrowHelper::ThrowNotSupportedException(::System::ExceptionResource  resource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowNotSupportedException", {}, {::i2c::type_of<::System::ExceptionResource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, resource);
}
inline void System::ThrowHelper::ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::ThrowHelper::ThrowInvalidOperationException_InvalidOperation_EnumOpCantHappen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowInvalidOperationException_InvalidOperation_EnumOpCantHappen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::ThrowHelper::ThrowInvalidOperationException_InvalidOperation_EnumNotStarted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowInvalidOperationException_InvalidOperation_EnumNotStarted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::ThrowHelper::ThrowInvalidOperationException_InvalidOperation_EnumEnded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowInvalidOperationException_InvalidOperation_EnumEnded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::ThrowHelper::ThrowInvalidOperationException_InvalidOperation_NoValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowInvalidOperationException_InvalidOperation_NoValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::ArgumentOutOfRangeException* System::ThrowHelper::GetArgumentOutOfRangeException(::System::ExceptionArgument  argument, ::StringW  resource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"GetArgumentOutOfRangeException", {}, {::i2c::type_of<::System::ExceptionArgument>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ArgumentOutOfRangeException*>(nullptr, ___internal_method, argument, resource);
}
inline void System::ThrowHelper::ThrowArgumentOutOfRange_IndexException()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowArgumentOutOfRange_IndexException", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::ThrowHelper::ThrowIndexArgumentOutOfRange_NeedNonNegNumException()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowIndexArgumentOutOfRange_NeedNonNegNumException", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::ThrowHelper::ThrowArgumentException_Argument_InvalidArrayType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowArgumentException_Argument_InvalidArrayType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::ArgumentException* System::ThrowHelper::GetAddingDuplicateWithKeyArgumentException(::System::Object*  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"GetAddingDuplicateWithKeyArgumentException", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ArgumentException*>(nullptr, ___internal_method, key);
}
inline void System::ThrowHelper::ThrowAddingDuplicateWithKeyArgumentException(::System::Object*  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowAddingDuplicateWithKeyArgumentException", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, key);
}
inline ::System::Collections::Generic::KeyNotFoundException* System::ThrowHelper::GetKeyNotFoundException(::System::Object*  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"GetKeyNotFoundException", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyNotFoundException*>(nullptr, ___internal_method, key);
}
inline void System::ThrowHelper::ThrowKeyNotFoundException(::System::Object*  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowKeyNotFoundException", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, key);
}
inline void System::ThrowHelper::ThrowInvalidTypeWithPointersNotSupported(::System::Type*  targetType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowInvalidTypeWithPointersNotSupported", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, targetType);
}
inline void System::ThrowHelper::ThrowInvalidOperationException_ConcurrentOperationsNotSupported()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowInvalidOperationException_ConcurrentOperationsNotSupported", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::InvalidOperationException* System::ThrowHelper::GetInvalidOperationException(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"GetInvalidOperationException", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::InvalidOperationException*>(nullptr, ___internal_method, str);
}
inline void System::ThrowHelper::ThrowArraySegmentCtorValidationFailedExceptions(::System::Array*  array, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowArraySegmentCtorValidationFailedExceptions", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, offset, count);
}
inline ::System::Exception* System::ThrowHelper::GetArraySegmentCtorValidationFailedException(::System::Array*  array, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"GetArraySegmentCtorValidationFailedException", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, array, offset, count);
}
inline ::System::ArgumentException* System::ThrowHelper::GetArgumentException(::System::ExceptionResource  resource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"GetArgumentException", {}, {::i2c::type_of<::System::ExceptionResource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ArgumentException*>(nullptr, ___internal_method, resource);
}
inline ::System::ArgumentNullException* System::ThrowHelper::GetArgumentNullException(::System::ExceptionArgument  argument)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"GetArgumentNullException", {}, {::i2c::type_of<::System::ExceptionArgument>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ArgumentNullException*>(nullptr, ___internal_method, argument);
}
template<typename T>
inline void System::ThrowHelper::IfNullAndNullsAreIllegalThenThrow(::System::Object*  value, ::System::ExceptionArgument  argName)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::ThrowHelper*>(),
                    {"IfNullAndNullsAreIllegalThenThrow", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::ExceptionArgument>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, argName);
}
inline ::StringW System::ThrowHelper::GetArgumentName(::System::ExceptionArgument  argument)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"GetArgumentName", {}, {::i2c::type_of<::System::ExceptionArgument>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, argument);
}
inline ::System::ArgumentOutOfRangeException* System::ThrowHelper::GetArgumentOutOfRangeException(::System::ExceptionArgument  argument, ::System::ExceptionResource  resource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"GetArgumentOutOfRangeException", {}, {::i2c::type_of<::System::ExceptionArgument>(), ::i2c::type_of<::System::ExceptionResource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ArgumentOutOfRangeException*>(nullptr, ___internal_method, argument, resource);
}
inline void System::ThrowHelper::ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::ThrowHelper::ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::StringW System::ThrowHelper::GetResourceName(::System::ExceptionResource  resource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ThrowHelper*>(),
                        {"GetResourceName", {}, {::i2c::type_of<::System::ExceptionResource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, resource);
}
// Ctor Parameters []
constexpr ::System::ThrowHelper::ThrowHelper()   {
}
