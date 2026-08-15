#pragma once
// IWYU pragma private; include "Rewired/ControllerTemplateMap.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/zzzz__ControllerTemplateMap_def.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__SerializedObject_def.hpp"
#include "Rewired/zzzz__ControllerMap_def.hpp"
#include "Rewired/zzzz__ControllerTemplateActionElementMap_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "Rewired/zzzz__IControllerTemplate_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::Rewired::ControllerTemplateMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerTemplateMap::*)(::System::Guid)>(&::Rewired::ControllerTemplateMap::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181918af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateMap*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerTemplateMap::*)(::System::Guid, int32_t, int32_t, int32_t)>(&::Rewired::ControllerTemplateMap::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181918be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateMap*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateMap.get_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerTemplateMap::*)()>(&::Rewired::ControllerTemplateMap::get_id)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181918d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateMap*>(),
                        {"get_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateMap.get_templateTypeGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::Rewired::ControllerTemplateMap::*)()>(&::Rewired::ControllerTemplateMap::get_templateTypeGuid)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181918e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateMap*>(),
                        {"get_templateTypeGuid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateMap.get_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerTemplateMap::*)()>(&::Rewired::ControllerTemplateMap::get_enabled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181918cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateMap*>(),
                        {"get_enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateMap.set_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerTemplateMap::*)(bool)>(&::Rewired::ControllerTemplateMap::set_enabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180323260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateMap*>(),
                        {"set_enabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateMap.get_categoryId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerTemplateMap::*)()>(&::Rewired::ControllerTemplateMap::get_categoryId)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181918c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateMap*>(),
                        {"get_categoryId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateMap.qGNCiOhlDRRMgcpHIRHrRORkpUIkb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerTemplateMap::*)(int32_t)>(&::Rewired::ControllerTemplateMap::qGNCiOhlDRRMgcpHIRHrRORkpUIkb)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180323270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateMap*>(),
                        {"qGNCiOhlDRRMgcpHIRHrRORkpUIkb", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateMap.get_layoutId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerTemplateMap::*)()>(&::Rewired::ControllerTemplateMap::get_layoutId)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181918db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateMap*>(),
                        {"get_layoutId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateMap.syiwnphHXqSPKGzmZybeWLOsrJcb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerTemplateMap::*)(int32_t)>(&::Rewired::ControllerTemplateMap::syiwnphHXqSPKGzmZybeWLOsrJcb)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180511530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateMap*>(),
                        {"syiwnphHXqSPKGzmZybeWLOsrJcb", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateMap.get_ElementMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Rewired::ControllerTemplateActionElementMap*>* (::Rewired::ControllerTemplateMap::*)()>(&::Rewired::ControllerTemplateMap::get_ElementMaps)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181918c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateMap*>(),
                        {"get_ElementMaps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateMap.ToXmlString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerTemplateMap::*)()>(&::Rewired::ControllerTemplateMap::ToXmlString)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181918980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateMap*>(),
                        {"ToXmlString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateMap.ToJsonString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerTemplateMap::*)()>(&::Rewired::ControllerTemplateMap::ToJsonString)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181918810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateMap*>(),
                        {"ToJsonString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateMap.ToControllerMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerMap* (::Rewired::ControllerTemplateMap::*)(::Rewired::Controller*)>(&::Rewired::ControllerTemplateMap::ToControllerMap)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x1819185a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateMap*>(),
                        {"ToControllerMap", {}, {::i2c::type_of<::Rewired::Controller*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateMap.EyDJOyETKHWdwHjbHsDjHSmgXDZJ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerTemplateMap::*)(::Rewired::Utils::Classes::Data::SerializedObject*)>(&::Rewired::ControllerTemplateMap::EyDJOyETKHWdwHjbHsDjHSmgXDZJ)> {
  constexpr static std::size_t size = 0x5c0;
  constexpr static std::size_t addrs = 0x181917be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerTemplateMap*>(),
                    {::i2c::class_of<::Rewired::ControllerTemplateMap*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateMap.QhjEauJQbknmEyBsmSaMiNQhQrwV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerTemplateMap::*)(::Rewired::Utils::Classes::Data::SerializedObject*)>(&::Rewired::ControllerTemplateMap::QhjEauJQbknmEyBsmSaMiNQhQrwV)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x181918370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerTemplateMap*>(),
                    {::i2c::class_of<::Rewired::ControllerTemplateMap*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateMap.iVKOLoICGAqFStvifSfmyNaAnzgL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerTemplateMap::*)()>(&::Rewired::ControllerTemplateMap::iVKOLoICGAqFStvifSfmyNaAnzgL)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181918ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateMap*>(),
                        {"iVKOLoICGAqFStvifSfmyNaAnzgL", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateMap.obShRQucfJcHamppAZVubMkqCyjp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::SerializedObject* (::Rewired::ControllerTemplateMap::*)()>(&::Rewired::ControllerTemplateMap::obShRQucfJcHamppAZVubMkqCyjp)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1819177a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateMap*>(),
                        {"obShRQucfJcHamppAZVubMkqCyjp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateMap.zPzeaCgToxzKkOBXPSFMAVxTJYQxA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerTemplateMap::*)(::Rewired::ControllerTemplateActionElementMap*)>(&::Rewired::ControllerTemplateMap::zPzeaCgToxzKkOBXPSFMAVxTJYQxA)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181919410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateMap*>(),
                        {"zPzeaCgToxzKkOBXPSFMAVxTJYQxA", {}, {::i2c::type_of<::Rewired::ControllerTemplateActionElementMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateMap.veuinzcdqEfXClFubFAQGBqwsybRA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerTemplateMap* (*)(::Rewired::IControllerTemplate*, ::Rewired::ControllerMap*)>(&::Rewired::ControllerTemplateMap::veuinzcdqEfXClFubFAQGBqwsybRA)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x181918ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateMap*>(),
                        {"veuinzcdqEfXClFubFAQGBqwsybRA", {}, {::i2c::type_of<::Rewired::IControllerTemplate*>(), ::i2c::type_of<::Rewired::ControllerMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateMap.FromXml
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerTemplateMap* (*)(::StringW)>(&::Rewired::ControllerTemplateMap::FromXml)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181918230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateMap*>(),
                        {"FromXml", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateMap.FromJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerTemplateMap* (*)(::StringW)>(&::Rewired::ControllerTemplateMap::FromJson)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819181a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateMap*>(),
                        {"FromJson", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateMap.KjMdIkenKbmqACMqbyynCoFQYYcec
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerTemplateMap* (*)(::Rewired::Utils::Classes::Data::SerializedObject*)>(&::Rewired::ControllerTemplateMap::KjMdIkenKbmqACMqbyynCoFQYYcec)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1819182c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateMap*>(),
                        {"KjMdIkenKbmqACMqbyynCoFQYYcec", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::SerializedObject*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::ControllerTemplateMap::__cordl_internal_get_DYYcitoamAQEjfUDvfCiTPoONaoe()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DYYcitoamAQEjfUDvfCiTPoONaoe;
}
constexpr int32_t const& Rewired::ControllerTemplateMap::__cordl_internal_get_DYYcitoamAQEjfUDvfCiTPoONaoe() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DYYcitoamAQEjfUDvfCiTPoONaoe;
}
constexpr void Rewired::ControllerTemplateMap::__cordl_internal_set_DYYcitoamAQEjfUDvfCiTPoONaoe(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DYYcitoamAQEjfUDvfCiTPoONaoe = value;
}
constexpr int32_t& Rewired::ControllerTemplateMap::__cordl_internal_get_nlxSGuXYvHsyyrvctofcihkwSwYd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nlxSGuXYvHsyyrvctofcihkwSwYd;
}
constexpr int32_t const& Rewired::ControllerTemplateMap::__cordl_internal_get_nlxSGuXYvHsyyrvctofcihkwSwYd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nlxSGuXYvHsyyrvctofcihkwSwYd;
}
constexpr void Rewired::ControllerTemplateMap::__cordl_internal_set_nlxSGuXYvHsyyrvctofcihkwSwYd(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nlxSGuXYvHsyyrvctofcihkwSwYd = value;
}
constexpr ::System::Guid& Rewired::ControllerTemplateMap::__cordl_internal_get_hJZDWVxRSdppIIiVZDnNdDJDdeaHb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hJZDWVxRSdppIIiVZDnNdDJDdeaHb;
}
constexpr ::System::Guid const& Rewired::ControllerTemplateMap::__cordl_internal_get_hJZDWVxRSdppIIiVZDnNdDJDdeaHb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hJZDWVxRSdppIIiVZDnNdDJDdeaHb;
}
constexpr void Rewired::ControllerTemplateMap::__cordl_internal_set_hJZDWVxRSdppIIiVZDnNdDJDdeaHb(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hJZDWVxRSdppIIiVZDnNdDJDdeaHb = value;
}
constexpr ::System::Collections::Generic::List_1<::Rewired::ControllerTemplateActionElementMap*>*& Rewired::ControllerTemplateMap::__cordl_internal_get_ylGqOtkYGlHYtQjuzEsjLOzLImYs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ylGqOtkYGlHYtQjuzEsjLOzLImYs;
}
constexpr ::System::Collections::Generic::List_1<::Rewired::ControllerTemplateActionElementMap*>* const& Rewired::ControllerTemplateMap::__cordl_internal_get_ylGqOtkYGlHYtQjuzEsjLOzLImYs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ylGqOtkYGlHYtQjuzEsjLOzLImYs;
}
constexpr void Rewired::ControllerTemplateMap::__cordl_internal_set_ylGqOtkYGlHYtQjuzEsjLOzLImYs(::System::Collections::Generic::List_1<::Rewired::ControllerTemplateActionElementMap*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ylGqOtkYGlHYtQjuzEsjLOzLImYs = value;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::ControllerTemplateActionElementMap*>*& Rewired::ControllerTemplateMap::__cordl_internal_get_dXFcoopQoBrsNHvAjFBFkxmSlDrv()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dXFcoopQoBrsNHvAjFBFkxmSlDrv;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::ControllerTemplateActionElementMap*>* const& Rewired::ControllerTemplateMap::__cordl_internal_get_dXFcoopQoBrsNHvAjFBFkxmSlDrv() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dXFcoopQoBrsNHvAjFBFkxmSlDrv;
}
constexpr void Rewired::ControllerTemplateMap::__cordl_internal_set_dXFcoopQoBrsNHvAjFBFkxmSlDrv(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::ControllerTemplateActionElementMap*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dXFcoopQoBrsNHvAjFBFkxmSlDrv = value;
}
constexpr bool& Rewired::ControllerTemplateMap::__cordl_internal_get_JrZHoyimSWcifJMnKVYFBFTNtfzVA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JrZHoyimSWcifJMnKVYFBFTNtfzVA;
}
constexpr bool const& Rewired::ControllerTemplateMap::__cordl_internal_get_JrZHoyimSWcifJMnKVYFBFTNtfzVA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JrZHoyimSWcifJMnKVYFBFTNtfzVA;
}
constexpr void Rewired::ControllerTemplateMap::__cordl_internal_set_JrZHoyimSWcifJMnKVYFBFTNtfzVA(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___JrZHoyimSWcifJMnKVYFBFTNtfzVA = value;
}
constexpr int32_t& Rewired::ControllerTemplateMap::__cordl_internal_get_RAYuHDFMguASjrVWaDRShimHcmtT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RAYuHDFMguASjrVWaDRShimHcmtT;
}
constexpr int32_t const& Rewired::ControllerTemplateMap::__cordl_internal_get_RAYuHDFMguASjrVWaDRShimHcmtT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RAYuHDFMguASjrVWaDRShimHcmtT;
}
constexpr void Rewired::ControllerTemplateMap::__cordl_internal_set_RAYuHDFMguASjrVWaDRShimHcmtT(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RAYuHDFMguASjrVWaDRShimHcmtT = value;
}
constexpr int32_t& Rewired::ControllerTemplateMap::__cordl_internal_get_KnCbPZWigDWQPUyJRDMsCrHdGulL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KnCbPZWigDWQPUyJRDMsCrHdGulL;
}
constexpr int32_t const& Rewired::ControllerTemplateMap::__cordl_internal_get_KnCbPZWigDWQPUyJRDMsCrHdGulL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KnCbPZWigDWQPUyJRDMsCrHdGulL;
}
constexpr void Rewired::ControllerTemplateMap::__cordl_internal_set_KnCbPZWigDWQPUyJRDMsCrHdGulL(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___KnCbPZWigDWQPUyJRDMsCrHdGulL = value;
}
constexpr int32_t& Rewired::ControllerTemplateMap::__cordl_internal_get_LvwlYepqnWomrjkhPMsFgSxdvudE()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LvwlYepqnWomrjkhPMsFgSxdvudE;
}
constexpr int32_t const& Rewired::ControllerTemplateMap::__cordl_internal_get_LvwlYepqnWomrjkhPMsFgSxdvudE() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LvwlYepqnWomrjkhPMsFgSxdvudE;
}
constexpr void Rewired::ControllerTemplateMap::__cordl_internal_set_LvwlYepqnWomrjkhPMsFgSxdvudE(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LvwlYepqnWomrjkhPMsFgSxdvudE = value;
}
inline void Rewired::ControllerTemplateMap::setStaticF_fVpEpoKUcsYkzDNXrpguRVelpxkV(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "fVpEpoKUcsYkzDNXrpguRVelpxkV", ::Rewired::ControllerTemplateMap*>(std::forward<int32_t>(value));
}
inline int32_t Rewired::ControllerTemplateMap::getStaticF_fVpEpoKUcsYkzDNXrpguRVelpxkV()  {
return ::cordl_internals::getStaticField<int32_t, "fVpEpoKUcsYkzDNXrpguRVelpxkV", ::Rewired::ControllerTemplateMap*>();
}
inline void Rewired::ControllerTemplateMap::_ctor(::System::Guid  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateMap*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ControllerTemplateMap::_ctor(::System::Guid  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateMap*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline int32_t Rewired::ControllerTemplateMap::get_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateMap*>(),
                        {"get_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Guid Rewired::ControllerTemplateMap::get_templateTypeGuid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateMap*>(),
                        {"get_templateTypeGuid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline bool Rewired::ControllerTemplateMap::get_enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateMap*>(),
                        {"get_enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ControllerTemplateMap::set_enabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateMap*>(),
                        {"set_enabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::ControllerTemplateMap::get_categoryId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateMap*>(),
                        {"get_categoryId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::ControllerTemplateMap::qGNCiOhlDRRMgcpHIRHrRORkpUIkb(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateMap*>(),
                        {"qGNCiOhlDRRMgcpHIRHrRORkpUIkb", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline int32_t Rewired::ControllerTemplateMap::get_layoutId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateMap*>(),
                        {"get_layoutId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::ControllerTemplateMap::syiwnphHXqSPKGzmZybeWLOsrJcb(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateMap*>(),
                        {"syiwnphHXqSPKGzmZybeWLOsrJcb", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::Collections::Generic::IList_1<::Rewired::ControllerTemplateActionElementMap*>* Rewired::ControllerTemplateMap::get_ElementMaps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateMap*>(),
                        {"get_ElementMaps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Rewired::ControllerTemplateActionElementMap*>*>(this, ___internal_method);
}
inline ::StringW Rewired::ControllerTemplateMap::ToXmlString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateMap*>(),
                        {"ToXmlString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Rewired::ControllerTemplateMap::ToJsonString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateMap*>(),
                        {"ToJsonString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Rewired::ControllerMap* Rewired::ControllerTemplateMap::ToControllerMap(::Rewired::Controller*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateMap*>(),
                        {"ToControllerMap", {}, {::i2c::type_of<::Rewired::Controller*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerMap*>(this, ___internal_method, controller);
}
inline void Rewired::ControllerTemplateMap::EyDJOyETKHWdwHjbHsDjHSmgXDZJ(::Rewired::Utils::Classes::Data::SerializedObject*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerTemplateMap*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ControllerTemplateMap::QhjEauJQbknmEyBsmSaMiNQhQrwV(::Rewired::Utils::Classes::Data::SerializedObject*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerTemplateMap*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ControllerTemplateMap::iVKOLoICGAqFStvifSfmyNaAnzgL()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateMap*>(),
                        {"iVKOLoICGAqFStvifSfmyNaAnzgL", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Utils::Classes::Data::SerializedObject* Rewired::ControllerTemplateMap::obShRQucfJcHamppAZVubMkqCyjp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateMap*>(),
                        {"obShRQucfJcHamppAZVubMkqCyjp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::SerializedObject*>(this, ___internal_method);
}
inline void Rewired::ControllerTemplateMap::zPzeaCgToxzKkOBXPSFMAVxTJYQxA(::Rewired::ControllerTemplateActionElementMap*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateMap*>(),
                        {"zPzeaCgToxzKkOBXPSFMAVxTJYQxA", {}, {::i2c::type_of<::Rewired::ControllerTemplateActionElementMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::ControllerTemplateMap* Rewired::ControllerTemplateMap::veuinzcdqEfXClFubFAQGBqwsybRA(::Rewired::IControllerTemplate*  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerMap*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateMap*>(),
                        {"veuinzcdqEfXClFubFAQGBqwsybRA", {}, {::i2c::type_of<::Rewired::IControllerTemplate*>(), ::i2c::type_of<::Rewired::ControllerMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerTemplateMap*>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::ControllerTemplateMap* Rewired::ControllerTemplateMap::FromXml(::StringW  xmlString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateMap*>(),
                        {"FromXml", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerTemplateMap*>(nullptr, ___internal_method, xmlString);
}
inline ::Rewired::ControllerTemplateMap* Rewired::ControllerTemplateMap::FromJson(::StringW  jsonString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateMap*>(),
                        {"FromJson", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerTemplateMap*>(nullptr, ___internal_method, jsonString);
}
inline ::Rewired::ControllerTemplateMap* Rewired::ControllerTemplateMap::KjMdIkenKbmqACMqbyynCoFQYYcec(::Rewired::Utils::Classes::Data::SerializedObject*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateMap*>(),
                        {"KjMdIkenKbmqACMqbyynCoFQYYcec", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::SerializedObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerTemplateMap*>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::ControllerTemplateMap* Rewired::ControllerTemplateMap::New_ctor(::System::Guid  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerTemplateMap*>(_cordl_fixed_empty_name_whitespace));
}
inline ::Rewired::ControllerTemplateMap* Rewired::ControllerTemplateMap::New_ctor(::System::Guid  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerTemplateMap*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3));
}
// Ctor Parameters []
constexpr ::Rewired::ControllerTemplateMap::ControllerTemplateMap()   {
}
