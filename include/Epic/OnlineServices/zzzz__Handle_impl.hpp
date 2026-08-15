#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Handle.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Handle.get_InnerHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::Handle::*)()>(&::Epic::OnlineServices::Handle::get_InnerHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Handle*>(),
                        {"get_InnerHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Handle.set_InnerHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Handle::*)(::System::IntPtr)>(&::Epic::OnlineServices::Handle::set_InnerHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bda40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Handle*>(),
                        {"set_InnerHandle", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Handle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Handle::*)()>(&::Epic::OnlineServices::Handle::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Handle*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Handle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Handle::*)(::System::IntPtr)>(&::Epic::OnlineServices::Handle::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bda40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Handle*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Handle.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Epic::OnlineServices::Handle*, ::Epic::OnlineServices::Handle*)>(&::Epic::OnlineServices::Handle::op_Equality)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1804d91a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Handle*>(),
                        {"op_Equality", {}, {::i2c::type_of<::Epic::OnlineServices::Handle*>(), ::i2c::type_of<::Epic::OnlineServices::Handle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Handle.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Epic::OnlineServices::Handle*, ::Epic::OnlineServices::Handle*)>(&::Epic::OnlineServices::Handle::op_Inequality)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804d9230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Handle*>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Epic::OnlineServices::Handle*>(), ::i2c::type_of<::Epic::OnlineServices::Handle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Handle.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::Handle::*)(::System::Object*)>(&::Epic::OnlineServices::Handle::Equals)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804d8ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Handle*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Handle*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Handle.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Epic::OnlineServices::Handle::*)()>(&::Epic::OnlineServices::Handle::GetHashCode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804d9120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Handle*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Handle*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Handle.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::Handle::*)(::Epic::OnlineServices::Handle*)>(&::Epic::OnlineServices::Handle::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804d90a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Handle*>(),
                        {"Equals", {}, {::i2c::type_of<::Epic::OnlineServices::Handle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Handle.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Epic::OnlineServices::Handle::*)()>(&::Epic::OnlineServices::Handle::ToString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804d9150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Handle*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Handle*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Handle.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Epic::OnlineServices::Handle::*)(::StringW, ::System::IFormatProvider*)>(&::Epic::OnlineServices::Handle::ToString)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804d9170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Handle*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Handle*>(), 6}
                ));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& Epic::OnlineServices::Handle::__cordl_internal_get__InnerHandle_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InnerHandle_k__BackingField;
}
constexpr ::System::IntPtr const& Epic::OnlineServices::Handle::__cordl_internal_get__InnerHandle_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InnerHandle_k__BackingField;
}
constexpr void Epic::OnlineServices::Handle::__cordl_internal_set__InnerHandle_k__BackingField(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____InnerHandle_k__BackingField = value;
}
inline ::System::IntPtr Epic::OnlineServices::Handle::get_InnerHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Handle*>(),
                        {"get_InnerHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
inline void Epic::OnlineServices::Handle::set_InnerHandle(::System::IntPtr  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Handle*>(),
                        {"set_InnerHandle", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Epic::OnlineServices::Handle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Handle*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Epic::OnlineServices::Handle::_ctor(::System::IntPtr  innerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Handle*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerHandle);
}
inline bool Epic::OnlineServices::Handle::op_Equality(::Epic::OnlineServices::Handle*  left, ::Epic::OnlineServices::Handle*  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Handle*>(),
                        {"op_Equality", {}, {::i2c::type_of<::Epic::OnlineServices::Handle*>(), ::i2c::type_of<::Epic::OnlineServices::Handle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool Epic::OnlineServices::Handle::op_Inequality(::Epic::OnlineServices::Handle*  left, ::Epic::OnlineServices::Handle*  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Handle*>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Epic::OnlineServices::Handle*>(), ::i2c::type_of<::Epic::OnlineServices::Handle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool Epic::OnlineServices::Handle::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Handle*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t Epic::OnlineServices::Handle::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Handle*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Epic::OnlineServices::Handle::Equals(::Epic::OnlineServices::Handle*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Handle*>(),
                        {"Equals", {}, {::i2c::type_of<::Epic::OnlineServices::Handle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline ::StringW Epic::OnlineServices::Handle::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Handle*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Epic::OnlineServices::Handle::ToString(::StringW  format, ::System::IFormatProvider*  formatProvider)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Handle*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, format, formatProvider);
}
inline ::Epic::OnlineServices::Handle* Epic::OnlineServices::Handle::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Handle*>());
}
inline ::Epic::OnlineServices::Handle* Epic::OnlineServices::Handle::New_ctor(::System::IntPtr  innerHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Handle*>(innerHandle));
}
/// @brief Convert operator to "::System::IEquatable_1<::Epic::OnlineServices::Handle*>"
constexpr  Epic::OnlineServices::Handle::operator ::System::IEquatable_1<::Epic::OnlineServices::Handle*>*() noexcept {
return static_cast<::System::IEquatable_1<::Epic::OnlineServices::Handle*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::Epic::OnlineServices::Handle*>"
constexpr ::System::IEquatable_1<::Epic::OnlineServices::Handle*>* Epic::OnlineServices::Handle::i___System__IEquatable_1___Epic__OnlineServices__Handle__() noexcept {
return static_cast<::System::IEquatable_1<::Epic::OnlineServices::Handle*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IFormattable"
constexpr  Epic::OnlineServices::Handle::operator ::System::IFormattable*() noexcept {
return static_cast<::System::IFormattable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* Epic::OnlineServices::Handle::i___System__IFormattable() noexcept {
return static_cast<::System::IFormattable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Handle::Handle()   {
}
