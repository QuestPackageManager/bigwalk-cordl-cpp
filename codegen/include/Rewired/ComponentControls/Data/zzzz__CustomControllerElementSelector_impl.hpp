#pragma once
// IWYU pragma private; include "Rewired/ComponentControls/Data/CustomControllerElementSelector.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/ComponentControls/Data/zzzz__CustomControllerElementSelector_def.hpp"
#include "Rewired/ComponentControls/Data/zzzz__CustomControllerElementSelector_def.hpp"
#include "Rewired/zzzz__ControllerElementIdentifier_def.hpp"
#include "Rewired/zzzz__CustomController_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType::CustomControllerElementSelector_ElementType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType::CustomControllerElementSelector_ElementType()   {
}
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType  Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType::Axis{static_cast<int32_t>(0x0)};
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType  Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType::Button{static_cast<int32_t>(0x1)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementSelector_SelectorType::CustomControllerElementSelector_SelectorType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementSelector_SelectorType::CustomControllerElementSelector_SelectorType()   {
}
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementSelector_SelectorType  Rewired::ComponentControls::Data::CustomControllerElementSelector_SelectorType::Name{static_cast<int32_t>(0x0)};
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementSelector_SelectorType  Rewired::ComponentControls::Data::CustomControllerElementSelector_SelectorType::Index{static_cast<int32_t>(0x1)};
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementSelector_SelectorType  Rewired::ComponentControls::Data::CustomControllerElementSelector_SelectorType::Id{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::Rewired::ComponentControls::Data::CustomControllerElementSelector.get_elementType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType (::Rewired::ComponentControls::Data::CustomControllerElementSelector::*)()>(&::Rewired::ComponentControls::Data::CustomControllerElementSelector::get_elementType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementSelector*>(),
                        {"get_elementType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Data::CustomControllerElementSelector.set_elementType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Data::CustomControllerElementSelector::*)(::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType)>(&::Rewired::ComponentControls::Data::CustomControllerElementSelector::set_elementType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818eff90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementSelector*>(),
                        {"set_elementType", {}, {::i2c::type_of<::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Data::CustomControllerElementSelector.get_selectorType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ComponentControls::Data::CustomControllerElementSelector_SelectorType (::Rewired::ComponentControls::Data::CustomControllerElementSelector::*)()>(&::Rewired::ComponentControls::Data::CustomControllerElementSelector::get_selectorType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementSelector*>(),
                        {"get_selectorType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Data::CustomControllerElementSelector.set_selectorType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Data::CustomControllerElementSelector::*)(::Rewired::ComponentControls::Data::CustomControllerElementSelector_SelectorType)>(&::Rewired::ComponentControls::Data::CustomControllerElementSelector::set_selectorType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818effb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementSelector*>(),
                        {"set_selectorType", {}, {::i2c::type_of<::Rewired::ComponentControls::Data::CustomControllerElementSelector_SelectorType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Data::CustomControllerElementSelector.get_elementName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ComponentControls::Data::CustomControllerElementSelector::*)()>(&::Rewired::ComponentControls::Data::CustomControllerElementSelector::get_elementName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementSelector*>(),
                        {"get_elementName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Data::CustomControllerElementSelector.set_elementName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Data::CustomControllerElementSelector::*)(::StringW)>(&::Rewired::ComponentControls::Data::CustomControllerElementSelector::set_elementName)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818eff40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementSelector*>(),
                        {"set_elementName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Data::CustomControllerElementSelector.get_elementIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ComponentControls::Data::CustomControllerElementSelector::*)()>(&::Rewired::ComponentControls::Data::CustomControllerElementSelector::get_elementIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementSelector*>(),
                        {"get_elementIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Data::CustomControllerElementSelector.set_elementIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Data::CustomControllerElementSelector::*)(int32_t)>(&::Rewired::ComponentControls::Data::CustomControllerElementSelector::set_elementIndex)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818eff20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementSelector*>(),
                        {"set_elementIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Data::CustomControllerElementSelector.get_elementId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ComponentControls::Data::CustomControllerElementSelector::*)()>(&::Rewired::ComponentControls::Data::CustomControllerElementSelector::get_elementId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementSelector*>(),
                        {"get_elementId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Data::CustomControllerElementSelector.set_elementId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Data::CustomControllerElementSelector::*)(int32_t)>(&::Rewired::ComponentControls::Data::CustomControllerElementSelector::set_elementId)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818eff00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementSelector*>(),
                        {"set_elementId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Data::CustomControllerElementSelector.get_isAssigned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::Data::CustomControllerElementSelector::*)()>(&::Rewired::ComponentControls::Data::CustomControllerElementSelector::get_isAssigned)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818efeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementSelector*>(),
                        {"get_isAssigned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Data::CustomControllerElementSelector.GetElementIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ComponentControls::Data::CustomControllerElementSelector::*)(::Rewired::CustomController*)>(&::Rewired::ComponentControls::Data::CustomControllerElementSelector::GetElementIndex)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1818efba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementSelector*>(),
                        {"GetElementIndex", {}, {::i2c::type_of<::Rewired::CustomController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Data::CustomControllerElementSelector.GetSelectorFormattedString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ComponentControls::Data::CustomControllerElementSelector::*)()>(&::Rewired::ComponentControls::Data::CustomControllerElementSelector::GetSelectorFormattedString)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818efdc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementSelector*>(),
                        {"GetSelectorFormattedString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Data::CustomControllerElementSelector.ZDZNXWKFAeWpdrNxZtqrWtCSlJTE
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>* (::Rewired::ComponentControls::Data::CustomControllerElementSelector::*)(::Rewired::CustomController*, ::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType)>(&::Rewired::ComponentControls::Data::CustomControllerElementSelector::ZDZNXWKFAeWpdrNxZtqrWtCSlJTE)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818efe40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementSelector*>(),
                        {"ZDZNXWKFAeWpdrNxZtqrWtCSlJTE", {}, {::i2c::type_of<::Rewired::CustomController*>(), ::i2c::type_of<::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Data::CustomControllerElementSelector.ClearCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Data::CustomControllerElementSelector::*)()>(&::Rewired::ComponentControls::Data::CustomControllerElementSelector::ClearCache)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818efb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementSelector*>(),
                        {"ClearCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Data::CustomControllerElementSelector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Data::CustomControllerElementSelector::*)()>(&::Rewired::ComponentControls::Data::CustomControllerElementSelector::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818efe90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementSelector*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType& Rewired::ComponentControls::Data::CustomControllerElementSelector::__cordl_internal_get__elementType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elementType;
}
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType const& Rewired::ComponentControls::Data::CustomControllerElementSelector::__cordl_internal_get__elementType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elementType;
}
constexpr void Rewired::ComponentControls::Data::CustomControllerElementSelector::__cordl_internal_set__elementType(::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____elementType = value;
}
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementSelector_SelectorType& Rewired::ComponentControls::Data::CustomControllerElementSelector::__cordl_internal_get__selectorType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectorType;
}
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementSelector_SelectorType const& Rewired::ComponentControls::Data::CustomControllerElementSelector::__cordl_internal_get__selectorType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectorType;
}
constexpr void Rewired::ComponentControls::Data::CustomControllerElementSelector::__cordl_internal_set__selectorType(::Rewired::ComponentControls::Data::CustomControllerElementSelector_SelectorType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selectorType = value;
}
constexpr ::StringW& Rewired::ComponentControls::Data::CustomControllerElementSelector::__cordl_internal_get__elementName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elementName;
}
constexpr ::StringW const& Rewired::ComponentControls::Data::CustomControllerElementSelector::__cordl_internal_get__elementName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elementName;
}
constexpr void Rewired::ComponentControls::Data::CustomControllerElementSelector::__cordl_internal_set__elementName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____elementName = value;
}
constexpr int32_t& Rewired::ComponentControls::Data::CustomControllerElementSelector::__cordl_internal_get__elementIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elementIndex;
}
constexpr int32_t const& Rewired::ComponentControls::Data::CustomControllerElementSelector::__cordl_internal_get__elementIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elementIndex;
}
constexpr void Rewired::ComponentControls::Data::CustomControllerElementSelector::__cordl_internal_set__elementIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____elementIndex = value;
}
constexpr int32_t& Rewired::ComponentControls::Data::CustomControllerElementSelector::__cordl_internal_get__elementId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elementId;
}
constexpr int32_t const& Rewired::ComponentControls::Data::CustomControllerElementSelector::__cordl_internal_get__elementId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elementId;
}
constexpr void Rewired::ComponentControls::Data::CustomControllerElementSelector::__cordl_internal_set__elementId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____elementId = value;
}
constexpr int32_t& Rewired::ComponentControls::Data::CustomControllerElementSelector::__cordl_internal_get_hiVuTzovuvqBTrMnKSfkBqaXhvfv()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hiVuTzovuvqBTrMnKSfkBqaXhvfv;
}
constexpr int32_t const& Rewired::ComponentControls::Data::CustomControllerElementSelector::__cordl_internal_get_hiVuTzovuvqBTrMnKSfkBqaXhvfv() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hiVuTzovuvqBTrMnKSfkBqaXhvfv;
}
constexpr void Rewired::ComponentControls::Data::CustomControllerElementSelector::__cordl_internal_set_hiVuTzovuvqBTrMnKSfkBqaXhvfv(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hiVuTzovuvqBTrMnKSfkBqaXhvfv = value;
}
constexpr int32_t& Rewired::ComponentControls::Data::CustomControllerElementSelector::__cordl_internal_get_DrlWjydUoGbthBWmWmZGhVnVdhtE()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DrlWjydUoGbthBWmWmZGhVnVdhtE;
}
constexpr int32_t const& Rewired::ComponentControls::Data::CustomControllerElementSelector::__cordl_internal_get_DrlWjydUoGbthBWmWmZGhVnVdhtE() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DrlWjydUoGbthBWmWmZGhVnVdhtE;
}
constexpr void Rewired::ComponentControls::Data::CustomControllerElementSelector::__cordl_internal_set_DrlWjydUoGbthBWmWmZGhVnVdhtE(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DrlWjydUoGbthBWmWmZGhVnVdhtE = value;
}
inline ::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType Rewired::ComponentControls::Data::CustomControllerElementSelector::get_elementType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementSelector*>(),
                        {"get_elementType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Data::CustomControllerElementSelector::set_elementType(::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementSelector*>(),
                        {"set_elementType", {}, {::i2c::type_of<::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::ComponentControls::Data::CustomControllerElementSelector_SelectorType Rewired::ComponentControls::Data::CustomControllerElementSelector::get_selectorType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementSelector*>(),
                        {"get_selectorType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ComponentControls::Data::CustomControllerElementSelector_SelectorType>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Data::CustomControllerElementSelector::set_selectorType(::Rewired::ComponentControls::Data::CustomControllerElementSelector_SelectorType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementSelector*>(),
                        {"set_selectorType", {}, {::i2c::type_of<::Rewired::ComponentControls::Data::CustomControllerElementSelector_SelectorType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Rewired::ComponentControls::Data::CustomControllerElementSelector::get_elementName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementSelector*>(),
                        {"get_elementName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Data::CustomControllerElementSelector::set_elementName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementSelector*>(),
                        {"set_elementName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::ComponentControls::Data::CustomControllerElementSelector::get_elementIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementSelector*>(),
                        {"get_elementIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Data::CustomControllerElementSelector::set_elementIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementSelector*>(),
                        {"set_elementIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::ComponentControls::Data::CustomControllerElementSelector::get_elementId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementSelector*>(),
                        {"get_elementId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Data::CustomControllerElementSelector::set_elementId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementSelector*>(),
                        {"set_elementId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ComponentControls::Data::CustomControllerElementSelector::get_isAssigned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementSelector*>(),
                        {"get_isAssigned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Rewired::ComponentControls::Data::CustomControllerElementSelector::GetElementIndex(::Rewired::CustomController*  customController)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementSelector*>(),
                        {"GetElementIndex", {}, {::i2c::type_of<::Rewired::CustomController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, customController);
}
inline ::StringW Rewired::ComponentControls::Data::CustomControllerElementSelector::GetSelectorFormattedString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementSelector*>(),
                        {"GetSelectorFormattedString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>* Rewired::ComponentControls::Data::CustomControllerElementSelector::ZDZNXWKFAeWpdrNxZtqrWtCSlJTE(::Rewired::CustomController*  _cordl_fixed_empty_name_whitespace, ::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementSelector*>(),
                        {"ZDZNXWKFAeWpdrNxZtqrWtCSlJTE", {}, {::i2c::type_of<::Rewired::CustomController*>(), ::i2c::type_of<::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::ComponentControls::Data::CustomControllerElementSelector::ClearCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementSelector*>(),
                        {"ClearCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Data::CustomControllerElementSelector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Data::CustomControllerElementSelector*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::ComponentControls::Data::CustomControllerElementSelector* Rewired::ComponentControls::Data::CustomControllerElementSelector::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ComponentControls::Data::CustomControllerElementSelector*>());
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementSelector::CustomControllerElementSelector()   {
}
