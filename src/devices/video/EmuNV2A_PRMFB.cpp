DEVICE_READ32(PRMFB)
{
	DEVICE_READ32_SWITCH() {
	default:
		DEBUG_READ32_UNHANDLED(PRMFB); // TODO : DEVICE_READ32_REG(prmfb);
		break;
	}

	DEVICE_READ32_END(PRMFB);
}

DEVICE_WRITE32(PRMFB)
{
	switch (addr) {
	default:
		DEBUG_WRITE32_UNHANDLED(PRMFB); // TODO : DEVICE_WRITE32_REG(prmfb);
		break;
	}

	DEVICE_WRITE32_END(PRMFB);
}

