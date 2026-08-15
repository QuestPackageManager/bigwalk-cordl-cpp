#pragma once
// IWYU pragma private; include "Rewired/ControllerTemplateActionElementMap.hpp"
#include "Rewired/zzzz__ControllerTemplateElementType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/zzzz__ControllerTemplateActionElementMap_def.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__SerializedObject_def.hpp"
#include "Rewired/zzzz__ActionElementMap_def.hpp"
#include "Rewired/zzzz__ControllerTemplateElementTarget_def.hpp"
#include "Rewired/zzzz__ControllerTemplateElementType_def.hpp"
#include "Rewired/zzzz__IControllerTemplateElementSource_def.hpp"
#include "Rewired/zzzz__IControllerTemplate_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Rewired::ControllerTemplateActionElementMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerTemplateActionElementMap::*)(::Rewired::ControllerTemplateElementType)>(&::Rewired::ControllerTemplateActionElementMap::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1819173a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerTemplateElementType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateActionElementMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerTemplateActionElementMap::*)(::Rewired::ControllerTemplateElementType, int32_t, ::Rewired::ActionElementMap*)>(&::Rewired::ControllerTemplateActionElementMap::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181917300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerTemplateElementType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateActionElementMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerTemplateActionElementMap::*)(::Rewired::ControllerTemplateElementType, int32_t, int32_t, bool)>(&::Rewired::ControllerTemplateActionElementMap::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181917360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerTemplateElementType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateActionElementMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerTemplateActionElementMap::*)(::Rewired::ActionElementMap*)>(&::Rewired::ControllerTemplateActionElementMap::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateActionElementMap.get_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerTemplateActionElementMap::*)()>(&::Rewired::ControllerTemplateActionElementMap::get_id)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(),
                        {"get_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateActionElementMap.get_elementType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerTemplateElementType (::Rewired::ControllerTemplateActionElementMap::*)()>(&::Rewired::ControllerTemplateActionElementMap::get_elementType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(),
                        {"get_elementType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateActionElementMap.get_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerTemplateActionElementMap::*)()>(&::Rewired::ControllerTemplateActionElementMap::get_enabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18037a0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(),
                        {"get_enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateActionElementMap.set_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerTemplateActionElementMap::*)(bool)>(&::Rewired::ControllerTemplateActionElementMap::set_enabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(),
                        {"set_enabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateActionElementMap.get_actionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerTemplateActionElementMap::*)()>(&::Rewired::ControllerTemplateActionElementMap::get_actionId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f42c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(),
                        {"get_actionId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateActionElementMap.set_actionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerTemplateActionElementMap::*)(int32_t)>(&::Rewired::ControllerTemplateActionElementMap::set_actionId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f43d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(),
                        {"set_actionId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateActionElementMap.get_elementIdentifierId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerTemplateActionElementMap::*)()>(&::Rewired::ControllerTemplateActionElementMap::get_elementIdentifierId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(),
                        {"get_elementIdentifierId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateActionElementMap.set_elementIdentifierId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerTemplateActionElementMap::*)(int32_t)>(&::Rewired::ControllerTemplateActionElementMap::set_elementIdentifierId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803164e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(),
                        {"set_elementIdentifierId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateActionElementMap.gwEDuuAyKvcTWMOlrVoFejGFgmLaA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerTemplateActionElementMap::*)(::Rewired::IControllerTemplate*, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*, bool)>(&::Rewired::ControllerTemplateActionElementMap::gwEDuuAyKvcTWMOlrVoFejGFgmLaA)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181917580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(),
                        {"gwEDuuAyKvcTWMOlrVoFejGFgmLaA", {}, {::i2c::type_of<::Rewired::IControllerTemplate*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateActionElementMap.rDZbSCIwNGcBIVziFJbJDOXJNQkKA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::SerializedObject* (::Rewired::ControllerTemplateActionElementMap::*)()>(&::Rewired::ControllerTemplateActionElementMap::rDZbSCIwNGcBIVziFJbJDOXJNQkKA)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1819177a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(),
                        {"rDZbSCIwNGcBIVziFJbJDOXJNQkKA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateActionElementMap.rkRkvYBdMAQTIoogmCzZhnXItUOQA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerTemplateActionElementMap::*)(::Rewired::Utils::Classes::Data::SerializedObject*)>(&::Rewired::ControllerTemplateActionElementMap::rkRkvYBdMAQTIoogmCzZhnXItUOQA)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181917810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(),
                    {::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateActionElementMap.iaqItbfGmAPgDwuJFrywpscPOxaJ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerTemplateActionElementMap::*)(::Rewired::Utils::Classes::Data::SerializedObject*)>(&::Rewired::ControllerTemplateActionElementMap::iaqItbfGmAPgDwuJFrywpscPOxaJ)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181917700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(),
                    {::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateActionElementMap.jJQhQPHfnCTAzUiKHwcWnRsjUVkG
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerTemplateActionElementMap::*)()>(&::Rewired::ControllerTemplateActionElementMap::jJQhQPHfnCTAzUiKHwcWnRsjUVkG)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181917790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(),
                    {::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateActionElementMap.PRbqacdyMeCJgajRxskvicnYqVur
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerTemplateActionElementMap::*)(::Rewired::IControllerTemplateElementSource*, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*, bool)>(&::Rewired::ControllerTemplateActionElementMap::PRbqacdyMeCJgajRxskvicnYqVur)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(),
                    {::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateActionElementMap.QryxqhkxSUCafEmnXjMqrjjRlvUe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerTemplateActionElementMap::*)(::Rewired::IControllerTemplate*, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*, bool)>(&::Rewired::ControllerTemplateActionElementMap::QryxqhkxSUCafEmnXjMqrjjRlvUe)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181916ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(),
                        {"QryxqhkxSUCafEmnXjMqrjjRlvUe", {}, {::i2c::type_of<::Rewired::IControllerTemplate*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateActionElementMap.SwmjbUFdJRWddzcHuzvOfjEeiSDcA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerTemplateActionElementMap* (*)(::Rewired::Utils::Classes::Data::SerializedObject*)>(&::Rewired::ControllerTemplateActionElementMap::SwmjbUFdJRWddzcHuzvOfjEeiSDcA)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181917240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(),
                        {"SwmjbUFdJRWddzcHuzvOfjEeiSDcA", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::SerializedObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateActionElementMap.SrVPAAGsrtSNToenMTdMbWiLuLZQ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerTemplateActionElementMap* (*)(::Rewired::ControllerTemplateElementTarget, ::Rewired::ActionElementMap*)>(&::Rewired::ControllerTemplateActionElementMap::SrVPAAGsrtSNToenMTdMbWiLuLZQ)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1819170e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(),
                        {"SrVPAAGsrtSNToenMTdMbWiLuLZQ", {}, {::i2c::type_of<::Rewired::ControllerTemplateElementTarget>(), ::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateActionElementMap.ezoNKJSAJaxrXsBBqLdcOUMHadtl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerTemplateActionElementMap* (*)(::Rewired::ActionElementMap*)>(&::Rewired::ControllerTemplateActionElementMap::ezoNKJSAJaxrXsBBqLdcOUMHadtl)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181917440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(),
                        {"ezoNKJSAJaxrXsBBqLdcOUMHadtl", {}, {::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::ControllerTemplateActionElementMap::__cordl_internal_get_PVYcyFEDYMZasklnwrngnJgwWZwd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PVYcyFEDYMZasklnwrngnJgwWZwd;
}
constexpr int32_t const& Rewired::ControllerTemplateActionElementMap::__cordl_internal_get_PVYcyFEDYMZasklnwrngnJgwWZwd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PVYcyFEDYMZasklnwrngnJgwWZwd;
}
constexpr void Rewired::ControllerTemplateActionElementMap::__cordl_internal_set_PVYcyFEDYMZasklnwrngnJgwWZwd(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PVYcyFEDYMZasklnwrngnJgwWZwd = value;
}
constexpr ::Rewired::ControllerTemplateElementType& Rewired::ControllerTemplateActionElementMap::__cordl_internal_get_kfAWZXwsPMqNwHqpnmmixIxGbLJu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kfAWZXwsPMqNwHqpnmmixIxGbLJu;
}
constexpr ::Rewired::ControllerTemplateElementType const& Rewired::ControllerTemplateActionElementMap::__cordl_internal_get_kfAWZXwsPMqNwHqpnmmixIxGbLJu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kfAWZXwsPMqNwHqpnmmixIxGbLJu;
}
constexpr void Rewired::ControllerTemplateActionElementMap::__cordl_internal_set_kfAWZXwsPMqNwHqpnmmixIxGbLJu(::Rewired::ControllerTemplateElementType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___kfAWZXwsPMqNwHqpnmmixIxGbLJu = value;
}
constexpr bool& Rewired::ControllerTemplateActionElementMap::__cordl_internal_get_jXlOpRtGiSzVexYHwwNtflyCxOHf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jXlOpRtGiSzVexYHwwNtflyCxOHf;
}
constexpr bool const& Rewired::ControllerTemplateActionElementMap::__cordl_internal_get_jXlOpRtGiSzVexYHwwNtflyCxOHf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jXlOpRtGiSzVexYHwwNtflyCxOHf;
}
constexpr void Rewired::ControllerTemplateActionElementMap::__cordl_internal_set_jXlOpRtGiSzVexYHwwNtflyCxOHf(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jXlOpRtGiSzVexYHwwNtflyCxOHf = value;
}
constexpr int32_t& Rewired::ControllerTemplateActionElementMap::__cordl_internal_get_rZKvewePKUgxlhdWQDuYctHXOXRbb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rZKvewePKUgxlhdWQDuYctHXOXRbb;
}
constexpr int32_t const& Rewired::ControllerTemplateActionElementMap::__cordl_internal_get_rZKvewePKUgxlhdWQDuYctHXOXRbb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rZKvewePKUgxlhdWQDuYctHXOXRbb;
}
constexpr void Rewired::ControllerTemplateActionElementMap::__cordl_internal_set_rZKvewePKUgxlhdWQDuYctHXOXRbb(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rZKvewePKUgxlhdWQDuYctHXOXRbb = value;
}
constexpr int32_t& Rewired::ControllerTemplateActionElementMap::__cordl_internal_get_VXJhKOQKbtXtkGOwTJGkaqMoqreK()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VXJhKOQKbtXtkGOwTJGkaqMoqreK;
}
constexpr int32_t const& Rewired::ControllerTemplateActionElementMap::__cordl_internal_get_VXJhKOQKbtXtkGOwTJGkaqMoqreK() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VXJhKOQKbtXtkGOwTJGkaqMoqreK;
}
constexpr void Rewired::ControllerTemplateActionElementMap::__cordl_internal_set_VXJhKOQKbtXtkGOwTJGkaqMoqreK(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VXJhKOQKbtXtkGOwTJGkaqMoqreK = value;
}
inline void Rewired::ControllerTemplateActionElementMap::setStaticF_nLfgDbokHPFYeAgNzIRcqGNbActj(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "nLfgDbokHPFYeAgNzIRcqGNbActj", ::Rewired::ControllerTemplateActionElementMap*>(std::forward<int32_t>(value));
}
inline int32_t Rewired::ControllerTemplateActionElementMap::getStaticF_nLfgDbokHPFYeAgNzIRcqGNbActj()  {
return ::cordl_internals::getStaticField<int32_t, "nLfgDbokHPFYeAgNzIRcqGNbActj", ::Rewired::ControllerTemplateActionElementMap*>();
}
inline void Rewired::ControllerTemplateActionElementMap::_ctor(::Rewired::ControllerTemplateElementType  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerTemplateElementType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ControllerTemplateActionElementMap::_ctor(::Rewired::ControllerTemplateElementType  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerTemplateElementType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline void Rewired::ControllerTemplateActionElementMap::_ctor(::Rewired::ControllerTemplateElementType  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerTemplateElementType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline void Rewired::ControllerTemplateActionElementMap::_ctor(::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline int32_t Rewired::ControllerTemplateActionElementMap::get_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(),
                        {"get_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Rewired::ControllerTemplateElementType Rewired::ControllerTemplateActionElementMap::get_elementType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(),
                        {"get_elementType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerTemplateElementType>(this, ___internal_method);
}
inline bool Rewired::ControllerTemplateActionElementMap::get_enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(),
                        {"get_enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ControllerTemplateActionElementMap::set_enabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(),
                        {"set_enabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::ControllerTemplateActionElementMap::get_actionId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(),
                        {"get_actionId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::ControllerTemplateActionElementMap::set_actionId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(),
                        {"set_actionId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::ControllerTemplateActionElementMap::get_elementIdentifierId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(),
                        {"get_elementIdentifierId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::ControllerTemplateActionElementMap::set_elementIdentifierId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(),
                        {"set_elementIdentifierId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::ControllerTemplateActionElementMap::gwEDuuAyKvcTWMOlrVoFejGFgmLaA(::Rewired::IControllerTemplate*  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(),
                        {"gwEDuuAyKvcTWMOlrVoFejGFgmLaA", {}, {::i2c::type_of<::Rewired::IControllerTemplate*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline ::Rewired::Utils::Classes::Data::SerializedObject* Rewired::ControllerTemplateActionElementMap::rDZbSCIwNGcBIVziFJbJDOXJNQkKA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(),
                        {"rDZbSCIwNGcBIVziFJbJDOXJNQkKA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::SerializedObject*>(this, ___internal_method);
}
inline void Rewired::ControllerTemplateActionElementMap::rkRkvYBdMAQTIoogmCzZhnXItUOQA(::Rewired::Utils::Classes::Data::SerializedObject*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ControllerTemplateActionElementMap::iaqItbfGmAPgDwuJFrywpscPOxaJ(::Rewired::Utils::Classes::Data::SerializedObject*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ControllerTemplateActionElementMap::jJQhQPHfnCTAzUiKHwcWnRsjUVkG()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Rewired::ControllerTemplateActionElementMap::PRbqacdyMeCJgajRxskvicnYqVur(::Rewired::IControllerTemplateElementSource*  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline int32_t Rewired::ControllerTemplateActionElementMap::QryxqhkxSUCafEmnXjMqrjjRlvUe(::Rewired::IControllerTemplate*  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(),
                        {"QryxqhkxSUCafEmnXjMqrjjRlvUe", {}, {::i2c::type_of<::Rewired::IControllerTemplate*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline ::Rewired::ControllerTemplateActionElementMap* Rewired::ControllerTemplateActionElementMap::SwmjbUFdJRWddzcHuzvOfjEeiSDcA(::Rewired::Utils::Classes::Data::SerializedObject*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(),
                        {"SwmjbUFdJRWddzcHuzvOfjEeiSDcA", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::SerializedObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerTemplateActionElementMap*>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::ControllerTemplateActionElementMap* Rewired::ControllerTemplateActionElementMap::SrVPAAGsrtSNToenMTdMbWiLuLZQ(::Rewired::ControllerTemplateElementTarget  _cordl_fixed_empty_name_whitespace, ::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(),
                        {"SrVPAAGsrtSNToenMTdMbWiLuLZQ", {}, {::i2c::type_of<::Rewired::ControllerTemplateElementTarget>(), ::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerTemplateActionElementMap*>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::ControllerTemplateActionElementMap* Rewired::ControllerTemplateActionElementMap::ezoNKJSAJaxrXsBBqLdcOUMHadtl(::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionElementMap*>(),
                        {"ezoNKJSAJaxrXsBBqLdcOUMHadtl", {}, {::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerTemplateActionElementMap*>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::ControllerTemplateActionElementMap* Rewired::ControllerTemplateActionElementMap::New_ctor(::Rewired::ControllerTemplateElementType  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerTemplateActionElementMap*>(_cordl_fixed_empty_name_whitespace));
}
inline ::Rewired::ControllerTemplateActionElementMap* Rewired::ControllerTemplateActionElementMap::New_ctor(::Rewired::ControllerTemplateElementType  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace_param_2)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerTemplateActionElementMap*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2));
}
inline ::Rewired::ControllerTemplateActionElementMap* Rewired::ControllerTemplateActionElementMap::New_ctor(::Rewired::ControllerTemplateElementType  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerTemplateActionElementMap*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3));
}
inline ::Rewired::ControllerTemplateActionElementMap* Rewired::ControllerTemplateActionElementMap::New_ctor(::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerTemplateActionElementMap*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::ControllerTemplateActionElementMap::ControllerTemplateActionElementMap()   {
}
