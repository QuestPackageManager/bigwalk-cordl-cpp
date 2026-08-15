#pragma once
// IWYU pragma private; include "System/Diagnostics/Tracing/EventSource.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Diagnostics/Tracing/zzzz__EventSource_def.hpp"
#include "System/Diagnostics/Tracing/zzzz__EventKeywords_def.hpp"
#include "System/Diagnostics/Tracing/zzzz__EventLevel_def.hpp"
#include "System/Diagnostics/Tracing/zzzz__EventSource_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::Tracing::EventSource_EventData.set_DataPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Tracing::EventSource_EventData::*)(::System::IntPtr)>(&::System::Diagnostics::Tracing::EventSource_EventData::set_DataPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Tracing::EventSource_EventData>(),
                        {"set_DataPointer", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Tracing::EventSource_EventData.set_Size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Tracing::EventSource_EventData::*)(int32_t)>(&::System::Diagnostics::Tracing::EventSource_EventData::set_Size)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Tracing::EventSource_EventData>(),
                        {"set_Size", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Tracing::EventSource_EventData.set_Reserved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Tracing::EventSource_EventData::*)(int32_t)>(&::System::Diagnostics::Tracing::EventSource_EventData::set_Reserved)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bdb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Tracing::EventSource_EventData>(),
                        {"set_Reserved", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Diagnostics::Tracing::EventSource_EventData::set_DataPointer(::System::IntPtr  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Tracing::EventSource_EventData>(),
                        {"set_DataPointer", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void System::Diagnostics::Tracing::EventSource_EventData::set_Size(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Tracing::EventSource_EventData>(),
                        {"set_Size", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void System::Diagnostics::Tracing::EventSource_EventData::set_Reserved(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Tracing::EventSource_EventData>(),
                        {"set_Reserved", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_DataPointer_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Size_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Reserved_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Diagnostics::Tracing::EventSource_EventData::EventSource_EventData(::System::IntPtr  _DataPointer_k__BackingField, int32_t  _Size_k__BackingField, int32_t  _Reserved_k__BackingField) noexcept  {
this->_DataPointer_k__BackingField = _DataPointer_k__BackingField;
this->_Size_k__BackingField = _Size_k__BackingField;
this->_Reserved_k__BackingField = _Reserved_k__BackingField;
}
// Ctor Parameters []
constexpr ::System::Diagnostics::Tracing::EventSource_EventData::EventSource_EventData()   {
}
//  Writing Method size for method: ::System::Diagnostics::Tracing::EventSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Tracing::EventSource::*)()>(&::System::Diagnostics::Tracing::EventSource::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1816c53d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Tracing::EventSource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Tracing::EventSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Tracing::EventSource::*)(::StringW)>(&::System::Diagnostics::Tracing::EventSource::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Tracing::EventSource*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Tracing::EventSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Tracing::EventSource::*)(::System::Guid, ::StringW)>(&::System::Diagnostics::Tracing::EventSource::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816c6a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Tracing::EventSource*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Tracing::EventSource.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Tracing::EventSource::*)()>(&::System::Diagnostics::Tracing::EventSource::Finalize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1815bcac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Diagnostics::Tracing::EventSource*>(),
                    {::i2c::class_of<::System::Diagnostics::Tracing::EventSource*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Tracing::EventSource.set_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Tracing::EventSource::*)(::StringW)>(&::System::Diagnostics::Tracing::EventSource::set_Name)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Tracing::EventSource*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Tracing::EventSource.IsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Diagnostics::Tracing::EventSource::*)()>(&::System::Diagnostics::Tracing::EventSource::IsEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Tracing::EventSource*>(),
                        {"IsEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Tracing::EventSource.IsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Diagnostics::Tracing::EventSource::*)(::System::Diagnostics::Tracing::EventLevel, ::System::Diagnostics::Tracing::EventKeywords)>(&::System::Diagnostics::Tracing::EventSource::IsEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Tracing::EventSource*>(),
                        {"IsEnabled", {}, {::i2c::type_of<::System::Diagnostics::Tracing::EventLevel>(), ::i2c::type_of<::System::Diagnostics::Tracing::EventKeywords>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Tracing::EventSource.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Tracing::EventSource::*)()>(&::System::Diagnostics::Tracing::EventSource::Dispose)> {
  constexpr static std::size_t size = 0x5510;
  constexpr static std::size_t addrs = 0x180e6eca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Tracing::EventSource*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Tracing::EventSource.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Tracing::EventSource::*)(bool)>(&::System::Diagnostics::Tracing::EventSource::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Diagnostics::Tracing::EventSource*>(),
                    {::i2c::class_of<::System::Diagnostics::Tracing::EventSource*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Tracing::EventSource.WriteEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Tracing::EventSource::*)(int32_t, int32_t)>(&::System::Diagnostics::Tracing::EventSource::WriteEvent)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1816c6890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Tracing::EventSource*>(),
                        {"WriteEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Tracing::EventSource.WriteEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Tracing::EventSource::*)(int32_t, ::StringW)>(&::System::Diagnostics::Tracing::EventSource::WriteEvent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1816c6740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Tracing::EventSource*>(),
                        {"WriteEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Tracing::EventSource.WriteEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Tracing::EventSource::*)(int32_t, int32_t, int32_t)>(&::System::Diagnostics::Tracing::EventSource::WriteEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1816c69c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Tracing::EventSource*>(),
                        {"WriteEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Tracing::EventSource.WriteEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Tracing::EventSource::*)(int32_t, int32_t, int32_t, int32_t)>(&::System::Diagnostics::Tracing::EventSource::WriteEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1816c6770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Tracing::EventSource*>(),
                        {"WriteEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Tracing::EventSource.WriteEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Tracing::EventSource::*)(int32_t, int64_t)>(&::System::Diagnostics::Tracing::EventSource::WriteEvent)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1816c6960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Tracing::EventSource*>(),
                        {"WriteEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Tracing::EventSource.WriteEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Tracing::EventSource::*)(int32_t, int64_t, ::StringW)>(&::System::Diagnostics::Tracing::EventSource::WriteEvent)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1816c6820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Tracing::EventSource*>(),
                        {"WriteEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Tracing::EventSource.WriteEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Tracing::EventSource::*)(int32_t, ::ArrayW<::System::Object*>)>(&::System::Diagnostics::Tracing::EventSource::WriteEvent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Tracing::EventSource*>(),
                        {"WriteEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Tracing::EventSource.WriteEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Tracing::EventSource::*)(int32_t, ::StringW, ::StringW, ::StringW)>(&::System::Diagnostics::Tracing::EventSource::WriteEvent)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1816c68f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Tracing::EventSource*>(),
                        {"WriteEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Tracing::EventSource.WriteEventCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Tracing::EventSource::*)(int32_t, int32_t, ::System::Diagnostics::Tracing::EventSource_EventData*)>(&::System::Diagnostics::Tracing::EventSource::WriteEventCore)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Tracing::EventSource*>(),
                        {"WriteEventCore", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Diagnostics::Tracing::EventSource_EventData*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Diagnostics::Tracing::EventSource::__cordl_internal_get__Name_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr ::StringW const& System::Diagnostics::Tracing::EventSource::__cordl_internal_get__Name_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr void System::Diagnostics::Tracing::EventSource::__cordl_internal_set__Name_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Name_k__BackingField = value;
}
inline void System::Diagnostics::Tracing::EventSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Tracing::EventSource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Diagnostics::Tracing::EventSource::_ctor(::StringW  eventSourceName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Tracing::EventSource*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventSourceName);
}
inline void System::Diagnostics::Tracing::EventSource::_ctor(::System::Guid  eventSourceGuid, ::StringW  eventSourceName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Tracing::EventSource*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventSourceGuid, eventSourceName);
}
inline void System::Diagnostics::Tracing::EventSource::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Diagnostics::Tracing::EventSource*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Diagnostics::Tracing::EventSource::set_Name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Tracing::EventSource*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Diagnostics::Tracing::EventSource::IsEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Tracing::EventSource*>(),
                        {"IsEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Diagnostics::Tracing::EventSource::IsEnabled(::System::Diagnostics::Tracing::EventLevel  level, ::System::Diagnostics::Tracing::EventKeywords  keywords)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Tracing::EventSource*>(),
                        {"IsEnabled", {}, {::i2c::type_of<::System::Diagnostics::Tracing::EventLevel>(), ::i2c::type_of<::System::Diagnostics::Tracing::EventKeywords>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, level, keywords);
}
inline void System::Diagnostics::Tracing::EventSource::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Tracing::EventSource*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Diagnostics::Tracing::EventSource::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Diagnostics::Tracing::EventSource*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void System::Diagnostics::Tracing::EventSource::WriteEvent(int32_t  eventId, int32_t  arg1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Tracing::EventSource*>(),
                        {"WriteEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventId, arg1);
}
inline void System::Diagnostics::Tracing::EventSource::WriteEvent(int32_t  eventId, ::StringW  arg1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Tracing::EventSource*>(),
                        {"WriteEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventId, arg1);
}
inline void System::Diagnostics::Tracing::EventSource::WriteEvent(int32_t  eventId, int32_t  arg1, int32_t  arg2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Tracing::EventSource*>(),
                        {"WriteEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventId, arg1, arg2);
}
inline void System::Diagnostics::Tracing::EventSource::WriteEvent(int32_t  eventId, int32_t  arg1, int32_t  arg2, int32_t  arg3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Tracing::EventSource*>(),
                        {"WriteEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventId, arg1, arg2, arg3);
}
inline void System::Diagnostics::Tracing::EventSource::WriteEvent(int32_t  eventId, int64_t  arg1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Tracing::EventSource*>(),
                        {"WriteEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventId, arg1);
}
inline void System::Diagnostics::Tracing::EventSource::WriteEvent(int32_t  eventId, int64_t  arg1, ::StringW  arg2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Tracing::EventSource*>(),
                        {"WriteEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventId, arg1, arg2);
}
inline void System::Diagnostics::Tracing::EventSource::WriteEvent(int32_t  eventId, ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Tracing::EventSource*>(),
                        {"WriteEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventId, args);
}
inline void System::Diagnostics::Tracing::EventSource::WriteEvent(int32_t  eventId, ::StringW  arg1, ::StringW  arg2, ::StringW  arg3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Tracing::EventSource*>(),
                        {"WriteEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventId, arg1, arg2, arg3);
}
inline void System::Diagnostics::Tracing::EventSource::WriteEventCore(int32_t  eventId, int32_t  eventDataCount, ::System::Diagnostics::Tracing::EventSource_EventData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Tracing::EventSource*>(),
                        {"WriteEventCore", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Diagnostics::Tracing::EventSource_EventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventId, eventDataCount, data);
}
inline ::System::Diagnostics::Tracing::EventSource* System::Diagnostics::Tracing::EventSource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::Tracing::EventSource*>());
}
inline ::System::Diagnostics::Tracing::EventSource* System::Diagnostics::Tracing::EventSource::New_ctor(::StringW  eventSourceName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::Tracing::EventSource*>(eventSourceName));
}
inline ::System::Diagnostics::Tracing::EventSource* System::Diagnostics::Tracing::EventSource::New_ctor(::System::Guid  eventSourceGuid, ::StringW  eventSourceName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::Tracing::EventSource*>(eventSourceGuid, eventSourceName));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  System::Diagnostics::Tracing::EventSource::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Diagnostics::Tracing::EventSource::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Diagnostics::Tracing::EventSource::EventSource()   {
}
