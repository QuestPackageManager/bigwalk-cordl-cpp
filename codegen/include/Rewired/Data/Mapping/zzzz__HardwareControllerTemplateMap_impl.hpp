#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/HardwareControllerTemplateMap.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Rewired/Data/Mapping/zzzz__HardwareControllerTemplateMap_def.hpp"
#include "Rewired/Data/Mapping/zzzz__HardwareControllerTemplateMap_def.hpp"
#include "Rewired/zzzz__ControllerTemplateElementIdentifier_def.hpp"
#include "System/zzzz__Guid_def.hpp"
// Ctor Parameters [CppParam { name: "BkArzkUCYVTKcuEUhYjuZspDtciW", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nszNbBUDGldtRGkzQdelFfnyoBhj", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "eKJcuuhezVvWkweYNFDiTXFwDpoH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ifNfxbsQAsikBJpKMDeougodwelkA", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Data::Mapping::HardwareControllerTemplateMap_cGLXOdyrUmsdgTHWCggcdxYJMCzj::HardwareControllerTemplateMap_cGLXOdyrUmsdgTHWCggcdxYJMCzj(int32_t  BkArzkUCYVTKcuEUhYjuZspDtciW, int32_t  nszNbBUDGldtRGkzQdelFfnyoBhj, int32_t  eKJcuuhezVvWkweYNFDiTXFwDpoH, bool  ifNfxbsQAsikBJpKMDeougodwelkA) noexcept  {
this->BkArzkUCYVTKcuEUhYjuZspDtciW = BkArzkUCYVTKcuEUhYjuZspDtciW;
this->nszNbBUDGldtRGkzQdelFfnyoBhj = nszNbBUDGldtRGkzQdelFfnyoBhj;
this->eKJcuuhezVvWkweYNFDiTXFwDpoH = eKJcuuhezVvWkweYNFDiTXFwDpoH;
this->ifNfxbsQAsikBJpKMDeougodwelkA = ifNfxbsQAsikBJpKMDeougodwelkA;
}
// Ctor Parameters []
constexpr ::Rewired::Data::Mapping::HardwareControllerTemplateMap_cGLXOdyrUmsdgTHWCggcdxYJMCzj::HardwareControllerTemplateMap_cGLXOdyrUmsdgTHWCggcdxYJMCzj()   {
}
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareControllerTemplateMap.get_Guid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::Rewired::Data::Mapping::HardwareControllerTemplateMap::*)()>(&::Rewired::Data::Mapping::HardwareControllerTemplateMap::get_Guid)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::Mapping::HardwareControllerTemplateMap*>(),
                    {::i2c::class_of<::Rewired::Data::Mapping::HardwareControllerTemplateMap*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareControllerTemplateMap.get_Key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::Mapping::HardwareControllerTemplateMap::*)()>(&::Rewired::Data::Mapping::HardwareControllerTemplateMap::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::Mapping::HardwareControllerTemplateMap*>(),
                    {::i2c::class_of<::Rewired::Data::Mapping::HardwareControllerTemplateMap*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareControllerTemplateMap.GetElementIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerTemplateElementIdentifier* (::Rewired::Data::Mapping::HardwareControllerTemplateMap::*)(int32_t)>(&::Rewired::Data::Mapping::HardwareControllerTemplateMap::GetElementIdentifier)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::Mapping::HardwareControllerTemplateMap*>(),
                    {::i2c::class_of<::Rewired::Data::Mapping::HardwareControllerTemplateMap*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareControllerTemplateMap.ContainsElementIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::Mapping::HardwareControllerTemplateMap::*)(int32_t)>(&::Rewired::Data::Mapping::HardwareControllerTemplateMap::ContainsElementIdentifier)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::Mapping::HardwareControllerTemplateMap*>(),
                    {::i2c::class_of<::Rewired::Data::Mapping::HardwareControllerTemplateMap*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareControllerTemplateMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::Mapping::HardwareControllerTemplateMap::*)()>(&::Rewired::Data::Mapping::HardwareControllerTemplateMap::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareControllerTemplateMap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Guid Rewired::Data::Mapping::HardwareControllerTemplateMap::get_Guid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::Mapping::HardwareControllerTemplateMap*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline ::StringW Rewired::Data::Mapping::HardwareControllerTemplateMap::get_Key()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::Mapping::HardwareControllerTemplateMap*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Rewired::ControllerTemplateElementIdentifier* Rewired::Data::Mapping::HardwareControllerTemplateMap::GetElementIdentifier(int32_t  id)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::Mapping::HardwareControllerTemplateMap*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerTemplateElementIdentifier*>(this, ___internal_method, id);
}
inline bool Rewired::Data::Mapping::HardwareControllerTemplateMap::ContainsElementIdentifier(int32_t  id)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::Mapping::HardwareControllerTemplateMap*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id);
}
inline void Rewired::Data::Mapping::HardwareControllerTemplateMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareControllerTemplateMap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Data::Mapping::HardwareControllerTemplateMap* Rewired::Data::Mapping::HardwareControllerTemplateMap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::Mapping::HardwareControllerTemplateMap*>());
}
// Ctor Parameters []
constexpr ::Rewired::Data::Mapping::HardwareControllerTemplateMap::HardwareControllerTemplateMap()   {
}
