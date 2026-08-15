#pragma once
// IWYU pragma private; include "Rewired/ControllerIdentifier.hpp"
#include "Rewired/zzzz__ControllerType_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "Rewired/zzzz__ControllerIdentifier_def.hpp"
#include "Rewired/zzzz__ControllerType_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::Rewired::ControllerIdentifier._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerIdentifier::*)(::Rewired::Controller*)>(&::Rewired::ControllerIdentifier::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18183de70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerIdentifier>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Controller*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerIdentifier.get_controllerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerIdentifier::*)()>(&::Rewired::ControllerIdentifier::get_controllerId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerIdentifier>(),
                        {"get_controllerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerIdentifier.set_controllerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerIdentifier::*)(int32_t)>(&::Rewired::ControllerIdentifier::set_controllerId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerIdentifier>(),
                        {"set_controllerId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerIdentifier.get_controllerType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerType (::Rewired::ControllerIdentifier::*)()>(&::Rewired::ControllerIdentifier::get_controllerType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18038fe90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerIdentifier>(),
                        {"get_controllerType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerIdentifier.set_controllerType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerIdentifier::*)(::Rewired::ControllerType)>(&::Rewired::ControllerIdentifier::set_controllerType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bda60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerIdentifier>(),
                        {"set_controllerType", {}, {::i2c::type_of<::Rewired::ControllerType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerIdentifier.get_hardwareTypeGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::Rewired::ControllerIdentifier::*)()>(&::Rewired::ControllerIdentifier::get_hardwareTypeGuid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18038fea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerIdentifier>(),
                        {"get_hardwareTypeGuid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerIdentifier.set_hardwareTypeGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerIdentifier::*)(::System::Guid)>(&::Rewired::ControllerIdentifier::set_hardwareTypeGuid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051e9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerIdentifier>(),
                        {"set_hardwareTypeGuid", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerIdentifier.get_hardwareIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerIdentifier::*)()>(&::Rewired::ControllerIdentifier::get_hardwareIdentifier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerIdentifier>(),
                        {"get_hardwareIdentifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerIdentifier.set_hardwareIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerIdentifier::*)(::StringW)>(&::Rewired::ControllerIdentifier::set_hardwareIdentifier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerIdentifier>(),
                        {"set_hardwareIdentifier", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerIdentifier.get_deviceInstanceGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::Rewired::ControllerIdentifier::*)()>(&::Rewired::ControllerIdentifier::get_deviceInstanceGuid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerIdentifier>(),
                        {"get_deviceInstanceGuid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerIdentifier.set_deviceInstanceGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerIdentifier::*)(::System::Guid)>(&::Rewired::ControllerIdentifier::set_deviceInstanceGuid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1815b93b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerIdentifier>(),
                        {"set_deviceInstanceGuid", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerIdentifier.get_Blank
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerIdentifier (*)()>(&::Rewired::ControllerIdentifier::get_Blank)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18183df00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerIdentifier>(),
                        {"get_Blank", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::ControllerIdentifier::_ctor(::Rewired::Controller*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerIdentifier>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Controller*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline int32_t Rewired::ControllerIdentifier::get_controllerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerIdentifier>(),
                        {"get_controllerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Rewired::ControllerIdentifier::set_controllerId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerIdentifier>(),
                        {"set_controllerId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Rewired::ControllerType Rewired::ControllerIdentifier::get_controllerType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerIdentifier>(),
                        {"get_controllerType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerType>(*this, ___internal_method);
}
inline void Rewired::ControllerIdentifier::set_controllerType(::Rewired::ControllerType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerIdentifier>(),
                        {"set_controllerType", {}, {::i2c::type_of<::Rewired::ControllerType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Guid Rewired::ControllerIdentifier::get_hardwareTypeGuid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerIdentifier>(),
                        {"get_hardwareTypeGuid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(*this, ___internal_method);
}
inline void Rewired::ControllerIdentifier::set_hardwareTypeGuid(::System::Guid  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerIdentifier>(),
                        {"set_hardwareTypeGuid", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW Rewired::ControllerIdentifier::get_hardwareIdentifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerIdentifier>(),
                        {"get_hardwareIdentifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Rewired::ControllerIdentifier::set_hardwareIdentifier(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerIdentifier>(),
                        {"set_hardwareIdentifier", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Guid Rewired::ControllerIdentifier::get_deviceInstanceGuid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerIdentifier>(),
                        {"get_deviceInstanceGuid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(*this, ___internal_method);
}
inline void Rewired::ControllerIdentifier::set_deviceInstanceGuid(::System::Guid  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerIdentifier>(),
                        {"set_deviceInstanceGuid", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Rewired::ControllerIdentifier Rewired::ControllerIdentifier::get_Blank()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerIdentifier>(),
                        {"get_Blank", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerIdentifier>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "ffTaUjBBBUxTyxYxciansJzCJuJe", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "oFtWUbTgyXPUhFeqTpbQPcNnwKuV", ty: "::Rewired::ControllerType", modifiers: "", def_value: Some("{}") }, CppParam { name: "SIEtplRZhLVsVDSdGRHLylWKIZpF", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }, CppParam { name: "BmrybQzSbvWomFZOQeIvrOcsvxyD", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "FJThuqAUDZAuRgGtaiCJegEgWNbp", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ControllerIdentifier::ControllerIdentifier(int32_t  ffTaUjBBBUxTyxYxciansJzCJuJe, ::Rewired::ControllerType  oFtWUbTgyXPUhFeqTpbQPcNnwKuV, ::System::Guid  SIEtplRZhLVsVDSdGRHLylWKIZpF, ::StringW  BmrybQzSbvWomFZOQeIvrOcsvxyD, ::System::Guid  FJThuqAUDZAuRgGtaiCJegEgWNbp) noexcept  {
this->ffTaUjBBBUxTyxYxciansJzCJuJe = ffTaUjBBBUxTyxYxciansJzCJuJe;
this->oFtWUbTgyXPUhFeqTpbQPcNnwKuV = oFtWUbTgyXPUhFeqTpbQPcNnwKuV;
this->SIEtplRZhLVsVDSdGRHLylWKIZpF = SIEtplRZhLVsVDSdGRHLylWKIZpF;
this->BmrybQzSbvWomFZOQeIvrOcsvxyD = BmrybQzSbvWomFZOQeIvrOcsvxyD;
this->FJThuqAUDZAuRgGtaiCJegEgWNbp = FJThuqAUDZAuRgGtaiCJegEgWNbp;
}
// Ctor Parameters []
constexpr ::Rewired::ControllerIdentifier::ControllerIdentifier()   {
}
